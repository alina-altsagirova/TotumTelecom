#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

namespace Ui { class LoginDialog; }

class LoginDialog : public QDialog {
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    int getUserRole() const { return m_userRole; }

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginDialog *ui;
    int m_userRole = -1;
};

#endif 
