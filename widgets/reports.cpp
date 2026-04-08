#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QSqlQuery>
#include "../ui/mainwindow.h"

void MainWindow::showStatusReport()
{
    QSqlQuery query("SELECT status, COUNT(id) FROM devices GROUP BY status");

    QPieSeries *series = new QPieSeries();

    while (query.next())
    {
        int status = query.value(0).toInt();
        int count = query.value(1).toInt();

        QString label = (status == 1) ? "Работает" : "Неисправно";
        QPieSlice *slice = series->append(label + ": " + QString::number(count), count);

        if (status == 1)
            slice->setColor(QColor("#2ecc71"));
        else
            slice->setColor(QColor("#e74c3c"));
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Состояние парка устройств");
    chart->legend()->setAlignment(Qt::AlignRight);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QDialog *dial = new QDialog(this);
    dial->setWindowTitle("Отчет по статусам");
    dial->setMinimumSize(500, 400);
    QVBoxLayout *layout = new QVBoxLayout(dial);
    layout->addWidget(chartView);
    dial->exec();
}
void MainWindow::showClientDeviceReport()
{
    QSqlQuery query("SELECT c.company_name, COUNT(d.id) "
                    "FROM clients c "
                    "LEFT JOIN devices d ON c.id = d.client_id "
                    "GROUP BY c.id");

    QBarSet *set = new QBarSet("Количество устройств");
    QStringList categories;

    while (query.next())
    {
        categories << query.value(0).toString(); 
        *set << query.value(1).toInt();         
    }

    QBarSeries *series = new QBarSeries();
    series->append(set);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Оборудование по клиентам");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setLabelFormat("%d");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QDialog *dial = new QDialog(this);
    dial->setMinimumSize(1500, 500);
    QVBoxLayout *layout = new QVBoxLayout(dial);
    layout->addWidget(chartView);
    dial->exec();
}