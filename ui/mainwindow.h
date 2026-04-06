#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QDate>
#include <QMessageBox>
#include <QSqlError>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include "ui_mainwindow.h"
#include <QSqlQuery>

QT_USE_NAMESPACE 

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(int userRole, QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void setupMonitoringTable();
    void setupTicketsTable();
    void setupUsersTable();
    void setupClientsTable();
    void setupModelsTable();
    void setupDashboard(int userRole);
    
    void on_AddClicked(QTableView *table);
    void on_DelClicked(QTableView *table);
    void showClientDeviceReport();
    void showStatusReport();
};

#endif 
