#include "mainwindow.h"


MainWindow::MainWindow(int userRole, QWidget *parent) : QMainWindow(parent),
                                                        ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setTabText(0, "🏠 Главная");
    ui->tabWidget->setTabText(1, "🖥️ Мониторинг");
    ui->tabWidget->setTabText(2, "⚙️ Администрирование");
    ui->tabWidget->setTabText(3, "🎫 Заявки");

    if (userRole == 0)
    {
        ui->tab_Admin->hide();
    }
    setupDashboard(userRole);
    ui->tabWidget->setCurrentIndex(0);

    connect(ui->tabWidget, &QTabWidget::currentChanged, [this](int index)
            {
        switch (index) {
            case 1: 
                setupMonitoringTable();
                setupModelsTable(); 
                break;
            case 3: setupTicketsTable(); break;
            case 2: 
                setupUsersTable();
                setupClientsTable();      
            break;
        } });

          for (auto table : this->findChildren<QTableView*>()) {
        table->setAlternatingRowColors(true);
    }
   

    connect(ui->btnClientReport, &QPushButton::clicked, this, &MainWindow::showClientDeviceReport);
    connect(ui->btnStatusReport, &QPushButton::clicked, this, &MainWindow::showStatusReport);

    // ADD && DEL btns
    connect(ui->btnAddTicket, &QPushButton::clicked, this, [this]()
            { on_AddClicked(ui->tableTickets); });
    connect(ui->btnDelTicket, &QPushButton::clicked, [this]()
            { on_DelClicked(ui->tableTickets); });
    connect(ui->btnAddUser, &QPushButton::clicked, [this]()
            { on_AddClicked(ui->tableUsers); });
    connect(ui->btnDelUser, &QPushButton::clicked, [this]()
            { on_DelClicked(ui->tableUsers); });
    connect(ui->btnAddDevice, &QPushButton::clicked, [this]()
            { on_AddClicked(ui->tableMonitoring); });
    connect(ui->btnDelDevice, &QPushButton::clicked, [this]()
            { on_DelClicked(ui->tableMonitoring); });
    connect(ui->btnAddClient, &QPushButton::clicked, [this]()
            { on_AddClicked(ui->tableClients); });
    connect(ui->btnDelClient, &QPushButton::clicked, [this]()
            { on_DelClicked(ui->tableClients); });
    connect(ui->btnAddModel, &QPushButton::clicked, [this]()
            { on_AddClicked(ui->tableModels); });
    connect(ui->btnDelModel, &QPushButton::clicked, [this]()
            { on_DelClicked(ui->tableModels); });
}

void MainWindow::setupMonitoringTable()
{
    auto *model = new QSqlRelationalTableModel(this);
    model->setTable("devices");

    model->setRelation(3, QSqlRelation("models", "id", "model_name"));
    model->setRelation(4, QSqlRelation("clients", "id", "company_name"));

    model->setHeaderData(1, Qt::Horizontal, "Устройство");
    model->setHeaderData(2, Qt::Horizontal, "IP");
    model->setHeaderData(3, Qt::Horizontal, "Модель");
    model->setHeaderData(4, Qt::Horizontal, "Компания");
    model->setHeaderData(5, Qt::Horizontal, "Статус");

    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableMonitoring->setModel(model);
    ui->tableMonitoring->hideColumn(0);
    ui->tableMonitoring->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

     ui->tableMonitoring->setItemDelegate(new QSqlRelationalDelegate(ui->tableMonitoring));
}

void MainWindow::setupTicketsTable()
{
    if (ui->tableTickets->model()) {
        auto *oldModel = qobject_cast<QSqlRelationalTableModel *>(ui->tableTickets->model());
        if (oldModel) oldModel->select();
        return;
    }

    auto *model = new QSqlRelationalTableModel(this);
    model->setTable("tickets");

    model->setRelation(1, QSqlRelation("devices", "id", "name"));
    model->setRelation(2, QSqlRelation("ticket_types", "id", "type_name"));

    model->setHeaderData(1, Qt::Horizontal, "🛠️ Устройство");
    model->setHeaderData(2, Qt::Horizontal, "📋 Тип");
    model->setHeaderData(3, Qt::Horizontal, "📝 Описание");
    model->setHeaderData(4, Qt::Horizontal, "📅 Дата");

    model->setEditStrategy(QSqlRelationalTableModel::OnFieldChange); 
    model->select();

    ui->tableTickets->setModel(model);
    
    ui->tableTickets->setItemDelegate(new QSqlRelationalDelegate(ui->tableTickets));
    ui->tableTickets->hideColumn(0);

    auto *header = ui->tableTickets->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::ResizeToContents); 
    header->setSectionResizeMode(3, QHeaderView::Stretch);     
}


void MainWindow::setupClientsTable()
{
    auto *model = new QSqlRelationalTableModel(this);

    model->setTable("clients");
    model->setHeaderData(1, Qt::Horizontal, "Название");
    model->setHeaderData(2, Qt::Horizontal, "Адрес");
    model->select();
    model->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
    ui->tableClients->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableClients->setModel(model);
    ui->tableClients->hideColumn(0);
}
void MainWindow::setupUsersTable()
{
    auto *model = new QSqlRelationalTableModel(this);

    model->setTable("users");
    model->setHeaderData(1, Qt::Horizontal, "Логин");
    model->setHeaderData(2, Qt::Horizontal, "Пароль");
    model->setHeaderData(3, Qt::Horizontal, "Роль");
    model->select();
    model->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
    ui->tableUsers->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableUsers->setModel(model);
    ui->tableUsers->hideColumn(0);
}
void MainWindow::setupModelsTable()
{
    auto *model = new QSqlRelationalTableModel(this);

    model->setTable("models");
    model->setHeaderData(1, Qt::Horizontal, "Бренд");
    model->setHeaderData(2, Qt::Horizontal, "Название");
    model->setHeaderData(3, Qt::Horizontal, "Тип");
    model->select();
    model->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
    ui->tableModels->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableModels->setModel(model);
    ui->tableModels->hideColumn(0);
}

void MainWindow::on_AddClicked(QTableView *table)
{
    auto *model = qobject_cast<QSqlRelationalTableModel *>(table->model());
    if (!model)
        return;

    int row = model->rowCount();
    if (model->insertRow(row))
    {
        if (model->tableName() == "tickets")
        {
            model->setData(model->index(row, 1), 1); 
            model->setData(model->index(row, 2), 1);
            model->setData(model->index(row, 3), "Описание");
            model->setData(model->index(row, 4), QDate::currentDate());
        }
        if (model->tableName() == "devices") {
             model->setData(model->index(row, 1), "Название");
            model->setData(model->index(row, 3), 1);
            model->setData(model->index(row, 4), 1);
        }
        table->setCurrentIndex(model->index(row, 1));
        table->edit(model->index(row, 1));
    }
}

void MainWindow::on_DelClicked(QTableView *table)
{
    auto *model = qobject_cast<QSqlRelationalTableModel *>(table->model());
    QModelIndex index = table->currentIndex();

    if (index.isValid() && QMessageBox::question(this, "Удаление", "Удалить выбранную запись?") == QMessageBox::Yes)
    {
        model->removeRow(index.row());
        model->select();
    }
}



MainWindow::~MainWindow()
{
    delete ui;
}
