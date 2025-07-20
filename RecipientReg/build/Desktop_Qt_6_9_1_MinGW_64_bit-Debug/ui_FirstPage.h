/********************************************************************************
** Form generated from reading UI file 'FirstPage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTPAGE_H
#define UI_FIRSTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstPageClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *donor;
    QPushButton *recipient;
    QFrame *line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirstPageClass)
    {
        if (FirstPageClass->objectName().isEmpty())
            FirstPageClass->setObjectName("FirstPageClass");
        FirstPageClass->resize(1000, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        FirstPageClass->setWindowIcon(icon);
        centralWidget = new QWidget(FirstPageClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -1, 1000, 571));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAcceptDrops(false);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/first.png);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/first.png")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 360, 81, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label_2->setFont(font1);
        donor = new QPushButton(centralWidget);
        donor->setObjectName("donor");
        donor->setGeometry(QRect(280, 430, 191, 61));
        donor->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        donor->setStyleSheet(QString::fromUtf8("background-color:rgb(177, 0, 3);\n"
"border-radius:25px;\n"
"color:white;\n"
"font: 700 10pt \"Arial\";"));
        recipient = new QPushButton(centralWidget);
        recipient->setObjectName("recipient");
        recipient->setGeometry(QRect(540, 430, 191, 61));
        recipient->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        recipient->setStyleSheet(QString::fromUtf8("background-color:rgb(177, 0, 3);\n"
"border-radius:25px;\n"
"color:white;\n"
"font: 700 10pt \"Arial\";"));
        line = new QFrame(centralWidget);
        line->setObjectName("line");
        line->setGeometry(QRect(490, 430, 31, 61));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        FirstPageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FirstPageClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        FirstPageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FirstPageClass);
        mainToolBar->setObjectName("mainToolBar");
        FirstPageClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FirstPageClass);
        statusBar->setObjectName("statusBar");
        FirstPageClass->setStatusBar(statusBar);

        retranslateUi(FirstPageClass);

        QMetaObject::connectSlotsByName(FirstPageClass);
    } // setupUi

    void retranslateUi(QMainWindow *FirstPageClass)
    {
        FirstPageClass->setWindowTitle(QCoreApplication::translate("FirstPageClass", "Blood Bank Management System", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("FirstPageClass", "Log In As", nullptr));
        donor->setText(QCoreApplication::translate("FirstPageClass", "Donor", nullptr));
        recipient->setText(QCoreApplication::translate("FirstPageClass", "Recipient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstPageClass: public Ui_FirstPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTPAGE_H
