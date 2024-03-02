/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 6. Feb 21:21:40 2024
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionQuit;
    QAction *actionClear;
    QAction *actionRandom;
    QAction *actionLeave;
    QWidget *centralWidget;
    QLabel *labelStatus;
    QLabel *labelOpponent;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuField;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(555, 330);
        MainWindow->setMinimumSize(QSize(555, 330));
        MainWindow->setMaximumSize(QSize(555, 330));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionRandom = new QAction(MainWindow);
        actionRandom->setObjectName(QString::fromUtf8("actionRandom"));
        actionRandom->setEnabled(true);
        actionLeave = new QAction(MainWindow);
        actionLeave->setObjectName(QString::fromUtf8("actionLeave"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setGeometry(QRect(40, 260, 531, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        labelStatus->setFont(font);
        labelOpponent = new QLabel(centralWidget);
        labelOpponent->setObjectName(QString::fromUtf8("labelOpponent"));
        labelOpponent->setGeometry(QRect(330, 260, 201, 21));
        labelOpponent->setFont(font);
        labelOpponent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 555, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuField = new QMenu(menuBar);
        menuField->setObjectName(QString::fromUtf8("menuField"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuField->menuAction());
        menuFile->addAction(actionStart);
        menuFile->addAction(actionLeave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuField->addAction(actionClear);
        menuField->addAction(actionRandom);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\234\320\276\321\200\321\201\320\272\320\276\320\271 \320\261\320\276\320\271", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        actionStart->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionClear->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        actionClear->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionRandom->setText(QApplication::translate("MainWindow", "Random", 0, QApplication::UnicodeUTF8));
        actionRandom->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionLeave->setText(QApplication::translate("MainWindow", "Leave", 0, QApplication::UnicodeUTF8));
        actionLeave->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QApplication::translate("MainWindow", "Status:   placing ships", 0, QApplication::UnicodeUTF8));
        labelOpponent->setText(QApplication::translate("MainWindow", "Opponent: ", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "Game", 0, QApplication::UnicodeUTF8));
        menuField->setTitle(QApplication::translate("MainWindow", "Field", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
