#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
     connect(ui->loginButton, &QPushButton::clicked, this, &LoginDialog::on_loginButton_clicked);
}

LoginDialog::~LoginDialog() {
    delete ui;
}

void LoginDialog::on_loginButton_clicked() {
    QString login = ui->loginLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (login.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля!");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT role FROM users WHERE login = ? AND password = ?");
    query.addBindValue(login);
    query.addBindValue(password);

    if (query.exec() && query.next()) {
        m_userRole = query.value(0).toInt();
        accept();
    } else {
        QMessageBox::critical(this, "Отказ", "Неверный логин или пароль!");
    }
}
