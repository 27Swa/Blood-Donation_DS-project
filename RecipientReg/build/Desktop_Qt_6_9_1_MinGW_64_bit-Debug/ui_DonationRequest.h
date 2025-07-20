/********************************************************************************
** Form generated from reading UI file 'DonationRequest.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONATIONREQUEST_H
#define UI_DONATIONREQUEST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DonationRequestClass
{
public:
    QWidget *centralWidget;
    QLabel *name;
    QPushButton *submit;
    QPushButton *accountF;
    QLabel *user;
    QPushButton *logout;
    QPushButton *accountM;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *back;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DonationRequestClass)
    {
        if (DonationRequestClass->objectName().isEmpty())
            DonationRequestClass->setObjectName("DonationRequestClass");
        DonationRequestClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DonationRequestClass->setWindowIcon(icon);
        DonationRequestClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(DonationRequestClass);
        centralWidget->setObjectName("centralWidget");
        name = new QLabel(centralWidget);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 0, 921, 561));
        name->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/profile.jpg);"));
        name->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/profile.jpg")));
        name->setScaledContents(true);
        submit = new QPushButton(centralWidget);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(200, 430, 141, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        submit->setFont(font);
        submit->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        submit->setStyleSheet(QString::fromUtf8("background-color:rgb(240, 240, 240);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:25px;\n"
"color: rgb(220, 3, 6);\n"
"font: 700 8pt \"Arial\";"));
        submit->setCheckable(false);
        submit->setAutoDefault(false);
        submit->setFlat(false);
        accountF = new QPushButton(centralWidget);
        accountF->setObjectName("accountF");
        accountF->setGeometry(QRect(580, 10, 35, 30));
        QFont font1;
        font1.setPointSize(7);
        accountF->setFont(font1);
        accountF->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        accountF->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/avatar_woman.png);"));
        user = new QLabel(centralWidget);
        user->setObjectName("user");
        user->setGeometry(QRect(560, 30, 81, 31));
        QFont font2;
        font2.setBold(true);
        user->setFont(font2);
        user->setAlignment(Qt::AlignmentFlag::AlignCenter);
        logout = new QPushButton(centralWidget);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(640, 10, 71, 31));
        logout->setFont(font);
        logout->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logout->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-style:solid;\n"
"border-width:0px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:9px;\n"
"color: white;\n"
"font: 700 8pt \"Arial\";"));
        logout->setCheckable(false);
        logout->setAutoDefault(false);
        logout->setFlat(false);
        accountM = new QPushButton(centralWidget);
        accountM->setObjectName("accountM");
        accountM->setGeometry(QRect(580, 10, 35, 31));
        accountM->setFont(font1);
        accountM->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        accountM->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/avatar_man.png)"));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(350, 370, 62, 22));
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        doubleSpinBox->setMinimum(0.250000000000000);
        doubleSpinBox->setMaximum(0.500000000000000);
        doubleSpinBox->setSingleStep(0.050000000000000);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 90, 261, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label->setFont(font3);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 370, 241, 21));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        label_2->setFont(font4);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 140, 431, 41));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 180, 431, 41));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 220, 431, 41));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 260, 431, 41));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 300, 431, 41));
        back = new QPushButton(centralWidget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 490, 21, 31));
        back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/arrow.png)"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 530, 81, 16));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(126, 126, 126)"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(140, 480, 261, 51));
        label_9->setStyleSheet(QString::fromUtf8("color:transparent"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DonationRequestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DonationRequestClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 18));
        DonationRequestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DonationRequestClass);
        mainToolBar->setObjectName("mainToolBar");
        DonationRequestClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DonationRequestClass);
        statusBar->setObjectName("statusBar");
        DonationRequestClass->setStatusBar(statusBar);

        retranslateUi(DonationRequestClass);

        submit->setDefault(false);
        logout->setDefault(false);


        QMetaObject::connectSlotsByName(DonationRequestClass);
    } // setupUi

    void retranslateUi(QMainWindow *DonationRequestClass)
    {
        DonationRequestClass->setWindowTitle(QCoreApplication::translate("DonationRequestClass", "Blood Bank Management System", nullptr));
        name->setText(QString());
#if QT_CONFIG(tooltip)
        submit->setToolTip(QCoreApplication::translate("DonationRequestClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        submit->setText(QCoreApplication::translate("DonationRequestClass", "Submit", nullptr));
        accountF->setText(QString());
        user->setText(QCoreApplication::translate("DonationRequestClass", "name", nullptr));
#if QT_CONFIG(tooltip)
        logout->setToolTip(QCoreApplication::translate("DonationRequestClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        logout->setText(QCoreApplication::translate("DonationRequestClass", "Log Out", nullptr));
        accountM->setText(QString());
        label->setText(QCoreApplication::translate("DonationRequestClass", "Here some tips before donating :", nullptr));
        label_2->setText(QCoreApplication::translate("DonationRequestClass", "How many bags of blood you will donate", nullptr));
        label_3->setText(QCoreApplication::translate("DonationRequestClass", "Drink plenty of fluids, such as water, juice, or sports drinks, in the days leading up\n"
"to your donation to ensure that you are well-hydrated.", nullptr));
        label_4->setText(QCoreApplication::translate("DonationRequestClass", "Bring a photo ID with you to the donation center, as well as any required forms\n"
"or documentation.", nullptr));
        label_5->setText(QCoreApplication::translate("DonationRequestClass", "Wear clothing with short sleeves or sleeves that can be easily rolled up, as this will \n"
"make it easier for the phlebotomist to access your arm.", nullptr));
        label_6->setText(QCoreApplication::translate("DonationRequestClass", "Let the phlebotomist know if you have any concerns or questions about the \n"
"donation process, or if you have had any previous issues with donating blood.", nullptr));
        label_7->setText(QCoreApplication::translate("DonationRequestClass", "After donating, drink plenty of fluids and avoid strenuous activity or heavy lifting \n"
"for a few hours.", nullptr));
        back->setText(QString());
        label_8->setText(QCoreApplication::translate("DonationRequestClass", "Previous Page", nullptr));
        label_9->setText(QCoreApplication::translate("DonationRequestClass", "Donation request completed , you have to go to \n"
"the donation center from 10 AM to 4 PM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonationRequestClass: public Ui_DonationRequestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONATIONREQUEST_H
