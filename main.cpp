#include <QApplication>
#include "database/dbmanager.h"
#include "ui/logindialog.h"
#include "ui/mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
      QFile f(":/Style.qss"); 
    
    if (!f.exists()) {
        printf("Не удалось найти файл стилей\n");
    } else {
        f.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&f);
        a.setStyleSheet(ts.readAll());
    }

    DbManager db("totum_data.db");


    LoginDialog login;
    if (login.exec() == QDialog::Accepted) {
        MainWindow w(login.getUserRole()); 
        w.showMaximized();
        return a.exec();
    }

    return 0;
}
