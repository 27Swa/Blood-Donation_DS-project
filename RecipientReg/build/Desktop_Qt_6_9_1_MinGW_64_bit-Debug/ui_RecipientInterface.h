/********************************************************************************
** Form generated from reading UI file 'RecipientInterface.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPIENTINTERFACE_H
#define UI_RECIPIENTINTERFACE_H

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

class Ui_RecipientInterfaceClass
{
public:
    QWidget *centralWidget;
    QLabel *name;
    QPushButton *accountM;
    QPushButton *accountF;
    QPushButton *logout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *pop;
    QPushButton *pushButton_3;
    QFrame *pop_2;
    QPushButton *pushButton_4;
    QLabel *user;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RecipientInterfaceClass)
    {
        if (RecipientInterfaceClass->objectName().isEmpty())
            RecipientInterfaceClass->setObjectName("RecipientInterfaceClass");
        RecipientInterfaceClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        RecipientInterfaceClass->setWindowIcon(icon);
        RecipientInterfaceClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(RecipientInterfaceClass);
        centralWidget->setObjectName("centralWidget");
        name = new QLabel(centralWidget);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 0, 921, 561));
        name->setStyleSheet(QString::fromUtf8(""));
        name->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/first1.jpg")));
        name->setScaledContents(true);
        accountM = new QPushButton(centralWidget);
        accountM->setObjectName("accountM");
        accountM->setGeometry(QRect(560, 10, 41, 31));
        accountM->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        accountM->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/avatar_man.png)"));
        accountF = new QPushButton(centralWidget);
        accountF->setObjectName("accountF");
        accountF->setGeometry(QRect(560, 10, 41, 31));
        accountF->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        accountF->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/avatar_woman.png)"));
        logout = new QPushButton(centralWidget);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(620, 10, 81, 31));
        logout->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logout->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-style:solid;\n"
"border-width:0px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:9px;\n"
"color: white;\n"
"font: 700 8pt \"Arial\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 330, 141, 51));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(158, 30, 24);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:20px;\n"
"color: white;\n"
"font: 700 8pt \"Arial\";"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 330, 141, 51));
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(240, 240, 240);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(158, 30, 24);\n"
"border-radius:20px;\n"
"color: rgb(158, 30, 24);;\n"
"font: 700 8pt \"Arial\";"));
        pop = new QFrame(centralWidget);
        pop->setObjectName("pop");
        pop->setGeometry(QRect(310, 190, 321, 191));
        pop->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/profile2.png)"));
        pop->setFrameShape(QFrame::StyledPanel);
        pop->setFrameShadow(QFrame::Raised);
        pushButton_3 = new QPushButton(pop);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 100, 81, 31));
        QFont font;
        font.setBold(true);
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/Rectanglered.png);\n"
"color:white"));
        pop_2 = new QFrame(centralWidget);
        pop_2->setObjectName("pop_2");
        pop_2->setGeometry(QRect(310, 190, 321, 191));
        pop_2->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/UN.png)"));
        pop_2->setFrameShape(QFrame::StyledPanel);
        pop_2->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(pop_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(120, 100, 81, 31));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/Rectanglered.png);\n"
"color:white"));
        user = new QLabel(centralWidget);
        user->setObjectName("user");
        user->setGeometry(QRect(530, 40, 101, 21));
        user->setFont(font);
        user->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 270, 211, 16));
        label->setFont(font);
        RecipientInterfaceClass->setCentralWidget(centralWidget);
        name->raise();
        accountM->raise();
        accountF->raise();
        logout->raise();
        pushButton->raise();
        pushButton_2->raise();
        user->raise();
        label->raise();
        pop->raise();
        pop_2->raise();
        menuBar = new QMenuBar(RecipientInterfaceClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        RecipientInterfaceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RecipientInterfaceClass);
        mainToolBar->setObjectName("mainToolBar");
        RecipientInterfaceClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RecipientInterfaceClass);
        statusBar->setObjectName("statusBar");
        RecipientInterfaceClass->setStatusBar(statusBar);

        retranslateUi(RecipientInterfaceClass);

        QMetaObject::connectSlotsByName(RecipientInterfaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *RecipientInterfaceClass)
    {
        RecipientInterfaceClass->setWindowTitle(QCoreApplication::translate("RecipientInterfaceClass", "Blood Bank Management System", nullptr));
        name->setText(QString());
        accountM->setText(QString());
        accountF->setText(QString());
        logout->setText(QCoreApplication::translate("RecipientInterfaceClass", "Log Out", nullptr));
        pushButton->setText(QCoreApplication::translate("RecipientInterfaceClass", "Requset Blood", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RecipientInterfaceClass", "Display Blood Data", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RecipientInterfaceClass", "Request", nullptr));
        pushButton_4->setText(QCoreApplication::translate("RecipientInterfaceClass", "Ok", nullptr));
        user->setText(QCoreApplication::translate("RecipientInterfaceClass", "name", nullptr));
        label->setText(QCoreApplication::translate("RecipientInterfaceClass", "You can recieve blood from this types:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipientInterfaceClass: public Ui_RecipientInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPIENTINTERFACE_H
