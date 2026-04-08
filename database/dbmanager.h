#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QStandardPaths>

class DbManager {
public:
    DbManager(const QString& path = "totum_telecom.db");
    ~DbManager();

    bool isOpen() const;
    bool createTables();
    
    void createDefaultAdmin();
    void fillData();
    void DropTables();

private:
    QSqlDatabase m_db;
};

#endif 
