#include "../ui/mainwindow.h"

void MainWindow::setupDashboard(int userRole) {
    QString roleName = (userRole == 1) ? "Администратор" : "Оператор";
    ui->lblGreeting->setText("Добро пожаловать, " + roleName + "!");
    

    QSqlQueryModel *recentModel = new QSqlQueryModel(this);
    recentModel->setQuery(
        "SELECT '🎫 Заявка' as Тип, devices.name as Объект, tickets.description as Детали, tickets.date "
        "FROM tickets "
        "JOIN devices ON tickets.device_id = devices.id "
        "UNION ALL "
        "SELECT '🖥️ Устройство', name, ip, 'Добавлено' "
        "FROM devices "
        "ORDER BY date DESC" 
    );
    
    ui->tableRecentActions->setModel(recentModel);
    ui->tableRecentActions->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableRecentActions->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
