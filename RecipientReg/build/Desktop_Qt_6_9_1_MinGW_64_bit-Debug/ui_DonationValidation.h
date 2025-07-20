/********************************************************************************
** Form generated from reading UI file 'DonationValidation.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONATIONVALIDATION_H
#define UI_DONATIONVALIDATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DonationValidationClass
{
public:
    QWidget *centralWidget;
    QLabel *backimg;
    QFrame *frame_2;
    QLabel *label_12;
    QCheckBox *c1;
    QCheckBox *c2;
    QCheckBox *c3;
    QCheckBox *c4;
    QCheckBox *c5;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DonationValidationClass)
    {
        if (DonationValidationClass->objectName().isEmpty())
            DonationValidationClass->setObjectName("DonationValidationClass");
        DonationValidationClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DonationValidationClass->setWindowIcon(icon);
        DonationValidationClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(DonationValidationClass);
        centralWidget->setObjectName("centralWidget");
        backimg = new QLabel(centralWidget);
        backimg->setObjectName("backimg");
        backimg->setGeometry(QRect(0, 0, 921, 571));
        backimg->setStyleSheet(QString::fromUtf8("background-image:url(:/RecipientReg/bloodd.jpg);"));
        backimg->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/profile.jpg")));
        backimg->setScaledContents(true);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(60, 130, 331, 321));
        QFont font;
        font.setUnderline(false);
        frame_2->setFont(font);
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 10, 331, 271));
        label_12->setStyleSheet(QString::fromUtf8("border:2px solid rgb(177, 0, 3);\n"
"border-radius:15px;\n"
""));
        c1 = new QCheckBox(frame_2);
        c1->setObjectName("c1");
        c1->setGeometry(QRect(20, 100, 261, 20));
        c2 = new QCheckBox(frame_2);
        c2->setObjectName("c2");
        c2->setGeometry(QRect(20, 130, 161, 20));
        c3 = new QCheckBox(frame_2);
        c3->setObjectName("c3");
        c3->setGeometry(QRect(20, 190, 231, 20));
        c4 = new QCheckBox(frame_2);
        c4->setObjectName("c4");
        c4->setGeometry(QRect(20, 160, 261, 20));
        c5 = new QCheckBox(frame_2);
        c5->setObjectName("c5");
        c5->setGeometry(QRect(20, 220, 301, 20));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 40, 261, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 70, 261, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 470, 231, 51));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(177, 0, 3);\n"
"border-radius:25px;\n"
"color:white;\n"
"font: 700 10pt \"Arial\";"));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 130, 151, 21));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"background-color:rgb(240, 240, 240)"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(130, 520, 141, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 521, 41, 20));
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:rgb(57, 163, 255);\n"
"background-color:rgb(240, 240, 240);\n"
"border-radius:25px;\n"
"font: 700 9pt \"Segoe UI\";"));
        pushButton_2->setFlat(true);
        DonationValidationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DonationValidationClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        DonationValidationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DonationValidationClass);
        mainToolBar->setObjectName("mainToolBar");
        DonationValidationClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DonationValidationClass);
        statusBar->setObjectName("statusBar");
        DonationValidationClass->setStatusBar(statusBar);

        retranslateUi(DonationValidationClass);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(DonationValidationClass);
    } // setupUi

    void retranslateUi(QMainWindow *DonationValidationClass)
    {
        DonationValidationClass->setWindowTitle(QCoreApplication::translate("DonationValidationClass", "Blood Bank Management System", nullptr));
        backimg->setText(QString());
        label_12->setText(QString());
        c1->setText(QCoreApplication::translate("DonationValidationClass", "Cold or flu sympotoms within the past week.", nullptr));
        c2->setText(QCoreApplication::translate("DonationValidationClass", "Traveled outside recently.", nullptr));
        c3->setText(QCoreApplication::translate("DonationValidationClass", "Had any recent dental work or surgery.", nullptr));
        c4->setText(QCoreApplication::translate("DonationValidationClass", "Had a tatoo or piercing within the past year.", nullptr));
        c5->setText(QCoreApplication::translate("DonationValidationClass", "(for women) Been pregnant within the past 6 weeks.", nullptr));
        label_7->setText(QCoreApplication::translate("DonationValidationClass", "Do You Have Any Of The Cases", nullptr));
        label_8->setText(QCoreApplication::translate("DonationValidationClass", "Mentioned Below ?", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("DonationValidationClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("DonationValidationClass", "Submit", nullptr));
        label->setText(QCoreApplication::translate("DonationValidationClass", "  Donation Request", nullptr));
        label_13->setText(QCoreApplication::translate("DonationValidationClass", "Already have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DonationValidationClass", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonationValidationClass: public Ui_DonationValidationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONATIONVALIDATION_H
