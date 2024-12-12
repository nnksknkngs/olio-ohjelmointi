#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    qDebug() << "Klikattiin Count-painiketta.";
    counter++;
    qDebug() << "Laskuri kasvanut: " << counter;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
    ui->txtResult->setText(s);
}

void MainWindow::on_btnReset_clicked()
{
    qDebug() << "Klikattiin Reset-painiketta.";
    counter = 0;
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
    ui->txtResult->setText("0");
}
