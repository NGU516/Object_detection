/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *customPlot;
    QPushButton *pushButton_Start_2;
    QPushButton *pushButton_Stop_2;
    QLabel *screen_frame;
    QLabel *screen_subframe;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1272, 706);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(580, 10, 681, 581));
        customPlot->setMaximumSize(QSize(1600, 900));
        pushButton_Start_2 = new QPushButton(centralWidget);
        pushButton_Start_2->setObjectName(QString::fromUtf8("pushButton_Start_2"));
        pushButton_Start_2->setGeometry(QRect(580, 600, 361, 25));
        pushButton_Stop_2 = new QPushButton(centralWidget);
        pushButton_Stop_2->setObjectName(QString::fromUtf8("pushButton_Stop_2"));
        pushButton_Stop_2->setGeometry(QRect(950, 600, 311, 25));
        screen_frame = new QLabel(centralWidget);
        screen_frame->setObjectName(QString::fromUtf8("screen_frame"));
        screen_frame->setGeometry(QRect(10, 0, 561, 351));
        screen_subframe = new QLabel(centralWidget);
        screen_subframe->setObjectName(QString::fromUtf8("screen_subframe"));
        screen_subframe->setGeometry(QRect(10, 330, 561, 311));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1272, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RealTimeGraph", nullptr));
        pushButton_Start_2->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        pushButton_Stop_2->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        screen_frame->setText(QCoreApplication::translate("MainWindow", "Frame", nullptr));
        screen_subframe->setText(QCoreApplication::translate("MainWindow", "subFrame", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
