#include "dbmanager.h"

DbManager::DbManager(const QString &path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if (!m_db.open())
    {
        qDebug() << "Ошибка: соединение с БД не установлено!" << m_db.lastError().text();
    }
    else
    {
        qDebug() << "БД подключена:" << path;
        createDefaultAdmin();
        createTables();
        // DropTables();
        fillData();
    }
}

DbManager::~DbManager()
{
    if (m_db.isOpen())
    {
        m_db.close();
    }
}

bool DbManager::isOpen() const
{
    return m_db.isOpen();
}

bool DbManager::createTables()
{
    QSqlQuery query;
    bool success = true;

    query.exec("PRAGMA foreign_keys = ON;");

    success &= query.exec("CREATE TABLE IF NOT EXISTS models ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "brand TEXT NOT NULL, "
                          "model_name TEXT NOT NULL, "
                          "type TEXT)");

    success &= query.exec("CREATE TABLE IF NOT EXISTS clients ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "company_name TEXT NOT NULL, "
                          "address TEXT)");

    success &= query.exec("CREATE TABLE IF NOT EXISTS users ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "login TEXT UNIQUE NOT NULL, "
                          "password TEXT NOT NULL, "
                          "role INTEGER DEFAULT 0)");

    success &= query.exec("CREATE TABLE IF NOT EXISTS ticket_types ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "type_name TEXT NOT NULL)");

    success &= query.exec("CREATE TABLE IF NOT EXISTS devices ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "name TEXT NOT NULL, "
                          "ip TEXT, "
                          "model_id INTEGER, "
                          "client_id INTEGER, "
                          "status INTEGER DEFAULT 1, "
                          "FOREIGN KEY(model_id) REFERENCES models(id), "
                          "FOREIGN KEY(client_id) REFERENCES clients(id))");

    success &= query.exec("CREATE TABLE IF NOT EXISTS tickets ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "device_id INTEGER, "
                          "type_id INTEGER, "
                          "description TEXT, "
                          "date DATE DEFAULT (date('now')), "
                          "FOREIGN KEY(device_id) REFERENCES devices(id) ON DELETE CASCADE, "
                          "FOREIGN KEY(type_id) REFERENCES ticket_types(id))");

    query.exec("SELECT COUNT(*) FROM ticket_types");
    if (query.next() && query.value(0).toInt() == 0)
    {
        query.exec("INSERT INTO ticket_types (type_name) VALUES ('Ремонт')");
        query.exec("INSERT INTO ticket_types (type_name) VALUES ('Настройка')");
        query.exec("INSERT INTO ticket_types (type_name) VALUES ('Замена')");
        query.exec("INSERT INTO ticket_types (type_name) VALUES ('Диагностика')");
    }

    return success;
}

void DbManager::fillData()
{
    QSqlQuery query;

    query.exec("INSERT INTO users (login, password, role) VALUES "
               "('admin', 'admin123', 1), ('operator1', 'pass1', 0), ('operator2', 'pass2', 0), "
               "('ivanov', '12345', 0), ('petrov', 'qwerty', 0), ('sidorov', 'root', 1), "
               "('kuznetsov', 'secret', 0), ('smirnov', 'work', 0), ('popov', '777', 0), "
               "('volkov', '111', 0), ('morozov', 'fox', 0), ('novikov', 'sun', 0), "
               "('fedorov', 'star', 0), ('semenov', 'gold', 0), ('egorov', 'blue', 1);");

    query.exec("INSERT INTO clients (company_name, address) VALUES "
               "('Газпром', 'ул. Ленина, 1'), ('Яндекс', 'ул. Льва Толстого, 16'), ('Сбербанк', 'ул. Вавилова, 19'), "
               "('Ростелеком', 'пр. Мира, 40'), ('МТС', 'ул. Марксистская, 4'), ('Мегафон', 'Оружейный пер., 41'), "
               "('Лукойл', 'Сретенский б-р, 11'), ('Магнит', 'ул. Леваневского, 185'), ('ВТБ', 'ул. Воронцовская, 43'), "
               "('Тинькофф', 'Головинское ш., 5'), ('Аэрофлот', 'ул. Арбат, 10'), ('Почта России', 'Варшавское ш., 37'), "
               "('РЖД', 'ул. Новая Басманная, 2'), ('Wildberries', 'ул. Ленинская, 20'), ('Ozon', 'Пресненская наб., 10');");

    query.exec("INSERT INTO models (brand, model_name, type) VALUES "
               "('Cisco', 'Catalyst 2960', 'Switch'), ('Cisco', 'ISR 4331', 'Router'), ('MikroTik', 'RB4011', 'Router'), "
               "('MikroTik', 'Cloud Core', 'Switch'), ('Huawei', 'Quidway S2300', 'Switch'), ('Huawei', 'AR6140', 'Router'), "
               "('Juniper', 'MX240', 'Router'), ('Juniper', 'EX2300', 'Switch'), ('TP-Link', 'Archer C7', 'AP'), "
               "('D-Link', 'DES-1005', 'Switch'), ('Zyxel', 'Keenetic Ultra', 'Router'), ('Ubiquiti', 'UniFi AC Pro', 'AP'), "
               "('Aruba', 'Instant On', 'AP'), ('Fortinet', 'FortiGate 60F', 'Firewall'), ('Dell', 'PowerConnect', 'Switch');");

   query.exec("INSERT INTO devices (name, ip, model_id, client_id, status) VALUES "
           "('Main_Switch', '192.168.1.1', 1, 1, '1'), ('Core_Router', '192.168.1.2', 2, 1, '1'), "
           "('Office_AP', '192.168.2.10', 12, 2, '0'), ('Backup_FW', '10.0.0.5', 14, 3, '0'), "
           "('Stock_Switch', '172.16.0.1', 5, 4, '1'), ('Border_GW', '8.8.8.1', 7, 5, '1'), "
           "('WiFi_Guest', '192.168.5.1', 9, 6, '0'), ('Lab_Router', '192.168.10.1', 3, 7, '0'), "
           "('CEO_Router', '192.168.1.100', 11, 8, '1'), ('Floor1_SW', '10.10.1.5', 8, 9, '1'), "
           "('Floor2_SW', '10.10.2.5', 8, 9, '0'), ('VPN_Server', '192.168.50.1', 14, 10, '1'), "
           "('DC_Switch', '10.50.1.1', 4, 11, '0'), ('Home_Office', '192.168.88.1', 3, 12, '1'), "
           "('Entry_Sensor', '192.168.0.50', 10, 13, '1'), "
           "('Kitchen_Hub', '192.168.1.15', 5, 2, '1'), ('Garage_Cam', '192.168.1.20', 6, 2, '1'), "
           "('Meeting_Room_TV', '10.0.5.11', 8, 3, '0'), ('Reception_PC', '172.16.5.4', 1, 4, '1'), "
           "('Warehouse_Scanner', '10.20.0.100', 12, 5, '1'), ('Server_Rack_1', '10.50.1.10', 4, 11, '1'), "
           "('Server_Rack_2', '10.50.1.11', 4, 11, '1'), ('HR_Printer', '192.168.2.55', 9, 2, '0'), "
           "('Accountant_PC', '192.168.2.60', 1, 2, '1'), ('Security_NVR', '10.0.0.200', 14, 13, '1'), "
           "('Public_Kiosk', '8.8.4.4', 11, 6, '1'), ('Guest_VLAN_GW', '192.168.99.1', 7, 6, '0'), "
           "('Dev_Machine_1', '172.20.1.10', 3, 7, '1'), ('Dev_Machine_2', '172.20.1.11', 3, 7, '1'), "
           "('CEO_Tablet', '192.168.1.101', 12, 8, '0'), ('Floor3_SW', '10.10.3.5', 8, 9, '1'), "
           "('Backup_Storage', '10.50.1.50', 14, 11, '1'), ('VoIP_Gateway', '192.168.10.5', 2, 1, '1'), "
           "('Outdoor_AP', '192.168.5.20', 12, 6, '0'), ('Admin_Laptop', '10.0.0.15', 11, 10, '1');");

    query.exec("INSERT INTO tickets (device_id, type_id, description, date) VALUES "
               "(1, 1, 'Перегрев порта №5', '2024-03-01'), (2, 2, 'Обновление прошивки', '2024-03-02'), "
               "(4, 3, 'Нет связи с объектом', '2024-03-03'), (6, 1, 'Высокая загрузка ЦП', '2024-03-04'), "
               "(11, 3, 'Замена кабеля', '2024-03-05'), (3, 2, 'Настройка гостевой сети', '2024-03-06'), "
               "(15, 1, 'Ошибка авторизации', '2024-03-07'), (7, 3, 'Сброс настроек', '2024-03-08'), "
               "(5, 2, 'Добавление VLAN', '2024-03-09'), (8, 1, 'Проверка безопасности', '2024-03-10'), "
               "(12, 3, 'Установка ИБП', '2024-03-11'), (13, 2, 'Переезд сервера', '2024-03-12'), "
               "(9, 1, 'Замена блока питания', '2024-03-13'), (10, 3, 'Обрыв линии', '2024-03-14'), "
               "(14, 2, 'Оптимизация трафика', '2024-03-15');");
}

void DbManager::createDefaultAdmin()
{
    QSqlQuery query;
    query.prepare("INSERT OR IGNORE INTO users (login, password, role) VALUES (?, ?, ?)");
    query.addBindValue("admin");
    query.addBindValue("admin");
    query.addBindValue(1);
    query.exec();
}

void DbManager::DropTables()
{
    QSqlQuery query;
    query.exec("DROP TABLE devices;");
}