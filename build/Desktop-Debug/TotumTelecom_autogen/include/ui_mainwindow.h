/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Main;
    QGridLayout *gridLayout_5;
    QPushButton *btnGoToTickets;
    QLabel *label;
    QWidget *tab_Monitoring;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAddDevice;
    QPushButton *btnDelDevice;
    QTableView *tableMonitoring;
    QWidget *tab_Admin;
    QGridLayout *gridLayout_2;
    QTableView *tableClients;
    QLabel *label_2;
    QTableView *tableUsers;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnAddUser;
    QPushButton *btnDelUser;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAddClient;
    QPushButton *btnDelClient;
    QWidget *tab_Tickets;
    QGridLayout *gridLayout_4;
    QTableView *tableTickets;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnAddTicket;
    QPushButton *btnDelTicket;
    QMenuBar *menubar;
    QMenu *menuAdm;
    QMenu *menumonitoring;
    QMenu *menutickets;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(811, 589);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tab_Main = new QWidget();
        tab_Main->setObjectName("tab_Main");
        tab_Main->setBaseSize(QSize(10, 10));
        gridLayout_5 = new QGridLayout(tab_Main);
        gridLayout_5->setObjectName("gridLayout_5");
        btnGoToTickets = new QPushButton(tab_Main);
        btnGoToTickets->setObjectName("btnGoToTickets");

        gridLayout_5->addWidget(btnGoToTickets, 1, 0, 1, 1);

        label = new QLabel(tab_Main);
        label->setObjectName("label");
        label->setTextFormat(Qt::RichText);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(tab_Main, QString());
        tab_Monitoring = new QWidget();
        tab_Monitoring->setObjectName("tab_Monitoring");
        gridLayout_3 = new QGridLayout(tab_Monitoring);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnAddDevice = new QPushButton(tab_Monitoring);
        btnAddDevice->setObjectName("btnAddDevice");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnAddDevice->setIcon(icon);

        verticalLayout->addWidget(btnAddDevice);

        btnDelDevice = new QPushButton(tab_Monitoring);
        btnDelDevice->setObjectName("btnDelDevice");
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnDelDevice->setIcon(icon1);

        verticalLayout->addWidget(btnDelDevice);


        gridLayout_6->addLayout(verticalLayout, 0, 1, 1, 1);

        tableMonitoring = new QTableView(tab_Monitoring);
        tableMonitoring->setObjectName("tableMonitoring");
        tableMonitoring->setFrameShape(QFrame::StyledPanel);
        tableMonitoring->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableMonitoring->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableMonitoring->setGridStyle(Qt::SolidLine);
        tableMonitoring->setSortingEnabled(true);
        tableMonitoring->horizontalHeader()->setVisible(true);
        tableMonitoring->horizontalHeader()->setCascadingSectionResizes(true);
        tableMonitoring->horizontalHeader()->setDefaultSectionSize(150);
        tableMonitoring->horizontalHeader()->setStretchLastSection(true);
        tableMonitoring->verticalHeader()->setVisible(false);
        tableMonitoring->verticalHeader()->setStretchLastSection(false);

        gridLayout_6->addWidget(tableMonitoring, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_Monitoring, QString());
        tab_Admin = new QWidget();
        tab_Admin->setObjectName("tab_Admin");
        gridLayout_2 = new QGridLayout(tab_Admin);
        gridLayout_2->setObjectName("gridLayout_2");
        tableClients = new QTableView(tab_Admin);
        tableClients->setObjectName("tableClients");
        tableClients->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableClients->setSortingEnabled(true);
        tableClients->horizontalHeader()->setDefaultSectionSize(150);
        tableClients->horizontalHeader()->setStretchLastSection(false);
        tableClients->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableClients, 1, 0, 1, 1);

        label_2 = new QLabel(tab_Admin);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        tableUsers = new QTableView(tab_Admin);
        tableUsers->setObjectName("tableUsers");
        tableUsers->setAlternatingRowColors(false);
        tableUsers->setSortingEnabled(true);
        tableUsers->horizontalHeader()->setDefaultSectionSize(150);
        tableUsers->horizontalHeader()->setStretchLastSection(false);
        tableUsers->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableUsers, 3, 0, 1, 1);

        label_3 = new QLabel(tab_Admin);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnAddUser = new QPushButton(tab_Admin);
        btnAddUser->setObjectName("btnAddUser");
        btnAddUser->setIcon(icon);

        verticalLayout_4->addWidget(btnAddUser);

        btnDelUser = new QPushButton(tab_Admin);
        btnDelUser->setObjectName("btnDelUser");
        btnDelUser->setIcon(icon1);

        verticalLayout_4->addWidget(btnDelUser);


        gridLayout_2->addLayout(verticalLayout_4, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btnAddClient = new QPushButton(tab_Admin);
        btnAddClient->setObjectName("btnAddClient");
        btnAddClient->setIcon(icon);

        verticalLayout_2->addWidget(btnAddClient);

        btnDelClient = new QPushButton(tab_Admin);
        btnDelClient->setObjectName("btnDelClient");
        btnDelClient->setIcon(icon1);

        verticalLayout_2->addWidget(btnDelClient);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        tabWidget->addTab(tab_Admin, QString());
        tab_Tickets = new QWidget();
        tab_Tickets->setObjectName("tab_Tickets");
        gridLayout_4 = new QGridLayout(tab_Tickets);
        gridLayout_4->setObjectName("gridLayout_4");
        tableTickets = new QTableView(tab_Tickets);
        tableTickets->setObjectName("tableTickets");
        tableTickets->setFrameShape(QFrame::NoFrame);
        tableTickets->horizontalHeader()->setDefaultSectionSize(150);
        tableTickets->horizontalHeader()->setStretchLastSection(false);
        tableTickets->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableTickets, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnAddTicket = new QPushButton(tab_Tickets);
        btnAddTicket->setObjectName("btnAddTicket");
        btnAddTicket->setIcon(icon);
        btnAddTicket->setCheckable(false);

        verticalLayout_3->addWidget(btnAddTicket);

        btnDelTicket = new QPushButton(tab_Tickets);
        btnDelTicket->setObjectName("btnDelTicket");
        btnDelTicket->setFocusPolicy(Qt::NoFocus);
        btnDelTicket->setIcon(icon1);

        verticalLayout_3->addWidget(btnDelTicket);


        gridLayout_4->addLayout(verticalLayout_3, 0, 1, 1, 1);

        tabWidget->addTab(tab_Tickets, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 811, 22));
        menuAdm = new QMenu(menubar);
        menuAdm->setObjectName("menuAdm");
        QIcon icon2;
        iconThemeName = QString::fromUtf8("applications-system");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        menuAdm->setIcon(icon2);
        menumonitoring = new QMenu(menubar);
        menumonitoring->setObjectName("menumonitoring");
        QIcon icon3;
        iconThemeName = QString::fromUtf8("network-receive");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        menumonitoring->setIcon(icon3);
        menutickets = new QMenu(menubar);
        menutickets->setObjectName("menutickets");
        menutickets->setIcon(icon);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAdm->menuAction());
        menubar->addAction(menumonitoring->menuAction());
        menubar->addAction(menutickets->menuAction());
        menuAdm->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnGoToTickets->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \320\267\320\260\321\217\320\262\320\272\320\260\320\274", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 Totum Telecom!</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Main), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        btnAddDevice->setText(QString());
        btnDelDevice->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Monitoring), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\271", nullptr));
        btnAddUser->setText(QString());
        btnDelUser->setText(QString());
        btnAddClient->setText(QString());
        btnDelClient->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Admin), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        btnAddTicket->setText(QString());
        btnDelTicket->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Tickets), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        menuAdm->setTitle(QCoreApplication::translate("MainWindow", "Adm", nullptr));
        menumonitoring->setTitle(QCoreApplication::translate("MainWindow", "monitoring", nullptr));
        menutickets->setTitle(QCoreApplication::translate("MainWindow", "tickets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
