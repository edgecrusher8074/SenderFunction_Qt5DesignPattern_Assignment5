#include "mainwindow.h"

#include <QApplication>

/**
 * @brief Assignment 5 for Qt5 Design Patterns Tutorial on Udemy.
 * @details Play around with the sender function.
 * @author edgecrusher8074
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
