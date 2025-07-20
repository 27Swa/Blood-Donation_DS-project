/********************************************************************************
** Form generated from reading UI file 'DisplayBlood.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYBLOOD_H
#define UI_DISPLAYBLOOD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayBloodClass
{
public:
    QWidget *centralWidget;
    QLabel *pack;
    QPushButton *back;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DisplayBloodClass)
    {
        if (DisplayBloodClass->objectName().isEmpty())
            DisplayBloodClass->setObjectName("DisplayBloodClass");
        DisplayBloodClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DisplayBloodClass->setWindowIcon(icon);
        DisplayBloodClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(DisplayBloodClass);
        centralWidget->setObjectName("centralWidget");
        pack = new QLabel(centralWidget);
        pack->setObjectName("pack");
        pack->setGeometry(QRect(0, 0, 921, 561));
        pack->setStyleSheet(QString::fromUtf8("background-image:url(:/RecipientReg/bloodd.jpg);"));
        pack->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/data.jpg")));
        pack->setScaledContents(true);
        back = new QPushButton(centralWidget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 510, 20, 31));
        back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/arrow.png);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 540, 71, 20));
        QFont font;
        font.setPointSize(7);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(132, 132, 132)"));
        DisplayBloodClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DisplayBloodClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        DisplayBloodClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DisplayBloodClass);
        mainToolBar->setObjectName("mainToolBar");
        DisplayBloodClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DisplayBloodClass);
        statusBar->setObjectName("statusBar");
        DisplayBloodClass->setStatusBar(statusBar);

        retranslateUi(DisplayBloodClass);

        QMetaObject::connectSlotsByName(DisplayBloodClass);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayBloodClass)
    {
        DisplayBloodClass->setWindowTitle(QCoreApplication::translate("DisplayBloodClass", "Blood Bank Management System", nullptr));
        pack->setText(QString());
        back->setText(QString());
        label_2->setText(QCoreApplication::translate("DisplayBloodClass", "Previous Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayBloodClass: public Ui_DisplayBloodClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYBLOOD_H
