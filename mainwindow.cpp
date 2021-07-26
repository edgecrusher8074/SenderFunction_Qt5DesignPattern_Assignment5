#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->m_pushButton, &QPushButton::released, this, &MainWindow::handleButtonReleased);
    connect(ui->m_pushButton_2, &QPushButton::released, this, &MainWindow::handleButtonReleased);
    connect(ui->m_pushButton_3, &QPushButton::released, this, &MainWindow::handleButtonReleased);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButtonReleased()
{
    auto sendingButton = qobject_cast<QPushButton*>(sender());
    if(sendingButton == nullptr)
    {
        qCritical() << "could not cast pointer";
        return;
    }

    if(sendingButton == ui->m_pushButton)
    {
        qInfo() << "Button 1 was pressed";
    }

    if(sendingButton == ui->m_pushButton_2)
    {
        qInfo() << "Button 2 was pressed";
    }

    if(sendingButton == ui->m_pushButton_3)
    {
        qInfo() << "Button 3 was pressed";
    }
}

