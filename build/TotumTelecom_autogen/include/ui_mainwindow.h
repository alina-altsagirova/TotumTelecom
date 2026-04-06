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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Main;
    QGridLayout *gridLayout_5;
    QLabel *icon;
    QSpacerItem *verticalSpacer_2;
    QLabel *lblGreeting;
    QPushButton *btnStatusReport;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClientReport;
    QCalendarWidget *calendarWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QTableView *tableRecentActions;
    QWidget *tab_Monitoring;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QTableView *tableMonitoring;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddModel;
    QPushButton *btnDelModel;
    QLabel *label_5;
    QTableView *tableModels;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddDevice;
    QPushButton *btnDelDevice;
    QWidget *tab_Admin;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnAddClient;
    QPushButton *btnDelClient;
    QLabel *label_2;
    QTableView *tableClients;
    QTableView *tableUsers;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnAddUser;
    QPushButton *btnDelUser;
    QWidget *tab_Tickets;
    QGridLayout *gridLayout_4;
    QTableView *tableTickets;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAddTicket;
    QPushButton *btnDelTicket;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(798, 582);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("audio-card")));
        MainWindow->setWindowIcon(icon1);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(true);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setStyleStrategy(QFont::PreferDefault);
        tabWidget->setFont(font);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tab_Main = new QWidget();
        tab_Main->setObjectName("tab_Main");
        tab_Main->setBaseSize(QSize(10, 10));
        gridLayout_5 = new QGridLayout(tab_Main);
        gridLayout_5->setObjectName("gridLayout_5");
        icon = new QLabel(tab_Main);
        icon->setObjectName("icon");

        gridLayout_5->addWidget(icon, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);

        lblGreeting = new QLabel(tab_Main);
        lblGreeting->setObjectName("lblGreeting");
        QFont font1;
        font1.setPointSize(56);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        lblGreeting->setFont(font1);
        lblGreeting->setTextFormat(Qt::RichText);

        gridLayout_5->addWidget(lblGreeting, 0, 1, 1, 2);

        btnStatusReport = new QPushButton(tab_Main);
        btnStatusReport->setObjectName("btnStatusReport");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStatusReport->sizePolicy().hasHeightForWidth());
        btnStatusReport->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        btnStatusReport->setFont(font2);

        gridLayout_5->addWidget(btnStatusReport, 8, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 8, 2, 2, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 7, 4, 3, 1);

        btnClientReport = new QPushButton(tab_Main);
        btnClientReport->setObjectName("btnClientReport");
        btnClientReport->setMinimumSize(QSize(0, 0));
        btnClientReport->setBaseSize(QSize(0, 0));
        btnClientReport->setFont(font2);

        gridLayout_5->addWidget(btnClientReport, 7, 1, 1, 1);

        calendarWidget = new QCalendarWidget(tab_Main);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setEnabled(true);
        calendarWidget->setFocusPolicy(Qt::NoFocus);
        calendarWidget->setContextMenuPolicy(Qt::NoContextMenu);
        calendarWidget->setFirstDayOfWeek(Qt::Monday);
        calendarWidget->setGridVisible(true);
        calendarWidget->setSelectionMode(QCalendarWidget::NoSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(false);

        gridLayout_5->addWidget(calendarWidget, 1, 1, 2, 3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(tab_Main);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_6);

        tableRecentActions = new QTableView(tab_Main);
        tableRecentActions->setObjectName("tableRecentActions");
        tableRecentActions->setMinimumSize(QSize(0, 0));
        tableRecentActions->setFrameShape(QFrame::NoFrame);
        tableRecentActions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableRecentActions->setSelectionMode(QAbstractItemView::NoSelection);
        tableRecentActions->setGridStyle(Qt::DotLine);
        tableRecentActions->horizontalHeader()->setVisible(false);
        tableRecentActions->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableRecentActions);


        gridLayout_5->addLayout(verticalLayout_4, 0, 4, 10, 2);

        tabWidget->addTab(tab_Main, QString());
        tab_Monitoring = new QWidget();
        tab_Monitoring->setObjectName("tab_Monitoring");
        gridLayout_3 = new QGridLayout(tab_Monitoring);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        label_4 = new QLabel(tab_Monitoring);
        label_4->setObjectName("label_4");
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        gridLayout_6->addLayout(verticalLayout, 8, 3, 1, 1);

        tableMonitoring = new QTableView(tab_Monitoring);
        tableMonitoring->setObjectName("tableMonitoring");
        tableMonitoring->setFrameShape(QFrame::StyledPanel);
        tableMonitoring->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableMonitoring->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableMonitoring->setGridStyle(Qt::SolidLine);
        tableMonitoring->setSortingEnabled(true);
        tableMonitoring->horizontalHeader()->setVisible(true);
        tableMonitoring->horizontalHeader()->setCascadingSectionResizes(true);
        tableMonitoring->horizontalHeader()->setDefaultSectionSize(100);
        tableMonitoring->horizontalHeader()->setStretchLastSection(true);
        tableMonitoring->verticalHeader()->setVisible(true);
        tableMonitoring->verticalHeader()->setStretchLastSection(false);

        gridLayout_6->addWidget(tableMonitoring, 8, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnAddModel = new QPushButton(tab_Monitoring);
        btnAddModel->setObjectName("btnAddModel");
        QIcon icon2;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnAddModel->setIcon(icon2);

        horizontalLayout_3->addWidget(btnAddModel);

        btnDelModel = new QPushButton(tab_Monitoring);
        btnDelModel->setObjectName("btnDelModel");
        QIcon icon3;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnDelModel->setIcon(icon3);

        horizontalLayout_3->addWidget(btnDelModel);


        gridLayout_6->addLayout(horizontalLayout_3, 3, 2, 4, 1);

        label_5 = new QLabel(tab_Monitoring);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 0, 2, 1, 1);

        tableModels = new QTableView(tab_Monitoring);
        tableModels->setObjectName("tableModels");
        tableModels->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableModels->setSortingEnabled(true);
        tableModels->horizontalHeader()->setCascadingSectionResizes(true);
        tableModels->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableModels->horizontalHeader()->setStretchLastSection(true);

        gridLayout_6->addWidget(tableModels, 8, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnAddDevice = new QPushButton(tab_Monitoring);
        btnAddDevice->setObjectName("btnAddDevice");
        btnAddDevice->setIcon(icon2);

        horizontalLayout->addWidget(btnAddDevice);

        btnDelDevice = new QPushButton(tab_Monitoring);
        btnDelDevice->setObjectName("btnDelDevice");
        btnDelDevice->setIcon(icon3);

        horizontalLayout->addWidget(btnDelDevice);


        gridLayout_6->addLayout(horizontalLayout, 3, 0, 4, 1);


        gridLayout_3->addLayout(gridLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_Monitoring, QString());
        tab_Admin = new QWidget();
        tab_Admin->setObjectName("tab_Admin");
        gridLayout_2 = new QGridLayout(tab_Admin);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnAddClient = new QPushButton(tab_Admin);
        btnAddClient->setObjectName("btnAddClient");
        btnAddClient->setIcon(icon2);

        horizontalLayout_4->addWidget(btnAddClient);

        btnDelClient = new QPushButton(tab_Admin);
        btnDelClient->setObjectName("btnDelClient");
        btnDelClient->setIcon(icon3);

        horizontalLayout_4->addWidget(btnDelClient);


        gridLayout_2->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        label_2 = new QLabel(tab_Admin);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        tableClients = new QTableView(tab_Admin);
        tableClients->setObjectName("tableClients");
        tableClients->setFont(font);
        tableClients->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableClients->setSortingEnabled(true);
        tableClients->horizontalHeader()->setDefaultSectionSize(150);
        tableClients->horizontalHeader()->setStretchLastSection(true);
        tableClients->verticalHeader()->setVisible(true);

        gridLayout_2->addWidget(tableClients, 8, 0, 1, 1);

        tableUsers = new QTableView(tab_Admin);
        tableUsers->setObjectName("tableUsers");
        tableUsers->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableUsers->setAlternatingRowColors(false);
        tableUsers->setSortingEnabled(true);
        tableUsers->horizontalHeader()->setDefaultSectionSize(150);
        tableUsers->horizontalHeader()->setStretchLastSection(true);
        tableUsers->verticalHeader()->setVisible(true);

        gridLayout_2->addWidget(tableUsers, 8, 1, 1, 1);

        label_3 = new QLabel(tab_Admin);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btnAddUser = new QPushButton(tab_Admin);
        btnAddUser->setObjectName("btnAddUser");
        btnAddUser->setIcon(icon2);

        horizontalLayout_5->addWidget(btnAddUser);

        btnDelUser = new QPushButton(tab_Admin);
        btnDelUser->setObjectName("btnDelUser");
        btnDelUser->setIcon(icon3);

        horizontalLayout_5->addWidget(btnDelUser);


        gridLayout_2->addLayout(horizontalLayout_5, 7, 1, 1, 1);

        tabWidget->addTab(tab_Admin, QString());
        tab_Tickets = new QWidget();
        tab_Tickets->setObjectName("tab_Tickets");
        gridLayout_4 = new QGridLayout(tab_Tickets);
        gridLayout_4->setObjectName("gridLayout_4");
        tableTickets = new QTableView(tab_Tickets);
        tableTickets->setObjectName("tableTickets");
        tableTickets->setFrameShape(QFrame::NoFrame);
        tableTickets->setSortingEnabled(true);
        tableTickets->horizontalHeader()->setDefaultSectionSize(150);
        tableTickets->horizontalHeader()->setStretchLastSection(false);
        tableTickets->verticalHeader()->setVisible(true);

        gridLayout_4->addWidget(tableTickets, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnAddTicket = new QPushButton(tab_Tickets);
        btnAddTicket->setObjectName("btnAddTicket");
        btnAddTicket->setIcon(icon2);
        btnAddTicket->setCheckable(false);

        horizontalLayout_2->addWidget(btnAddTicket);

        btnDelTicket = new QPushButton(tab_Tickets);
        btnDelTicket->setObjectName("btnDelTicket");
        btnDelTicket->setFocusPolicy(Qt::NoFocus);
        btnDelTicket->setIcon(icon3);

        horizontalLayout_2->addWidget(btnDelTicket);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_Tickets, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Totum Telecom", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202", nullptr));
        icon->setText(QString());
        lblGreeting->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\260\320\276\320\277\320\273\320\276\320\262\320\260\321\200\320\262\320\276</p></body></html>", nullptr));
        btnStatusReport->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\277\320\276 \321\201\321\202\320\260\321\202\321\203\321\201\320\260\320\274", nullptr));
        btnClientReport->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\277\320\276 \320\272\320\273\320\270\320\265\320\275\321\202\320\260\320\274", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\320\233\320\265\320\275\321\202\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\321\205 \321\201\320\276\320\261\321\213\321\202\320\270\320\271</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Main), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\275\320\270\321\202\320\276\321\200\320\270\320\275\320\263 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        btnAddModel->setText(QString());
        btnDelModel->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\320\270", nullptr));
        btnAddDevice->setText(QString());
        btnDelDevice->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Monitoring), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        btnAddClient->setText(QString());
        btnDelClient->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\271", nullptr));
        btnAddUser->setText(QString());
        btnDelUser->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Admin), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        btnAddTicket->setText(QString());
        btnDelTicket->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Tickets), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
