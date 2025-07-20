/********************************************************************************
** Form generated from reading UI file 'DonorValidation.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONORVALIDATION_H
#define UI_DONORVALIDATION_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DonorValidationClass
{
public:
    QWidget *centralWidget;
    QLabel *backimg;
    QFrame *frame_2;
    QLabel *label_6;
    QLineEdit *ageTB;
    QLabel *agealertmsg;
    QLabel *label_12;
    QLabel *date;
    QDateEdit *dateolatest;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DonorValidationClass)
    {
        if (DonorValidationClass->objectName().isEmpty())
            DonorValidationClass->setObjectName("DonorValidationClass");
        DonorValidationClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DonorValidationClass->setWindowIcon(icon);
        DonorValidationClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(DonorValidationClass);
        centralWidget->setObjectName("centralWidget");
        backimg = new QLabel(centralWidget);
        backimg->setObjectName("backimg");
        backimg->setGeometry(QRect(0, 0, 921, 571));
        backimg->setStyleSheet(QString::fromUtf8("background-image:url(:/RecipientReg/bloodd.jpg);"));
        backimg->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/bloodd.jpg")));
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
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 30, 51, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        ageTB = new QLineEdit(frame_2);
        ageTB->setObjectName("ageTB");
        ageTB->setGeometry(QRect(20, 61, 81, 20));
        ageTB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid rgb(130, 130, 130) ;\n"
"border-radius:15px solid;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"border:1px solid rgb(175, 175, 175) ;\n"
"border-radius:15px solid;\n"
"border-bottom:2px solid rgb(157, 0, 3);\n"
"}\n"
""));
        agealertmsg = new QLabel(frame_2);
        agealertmsg->setObjectName("agealertmsg");
        agealertmsg->setGeometry(QRect(20, 80, 121, 16));
        QFont font1;
        font1.setPointSize(7);
        font1.setUnderline(false);
        agealertmsg->setFont(font1);
        agealertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 10, 331, 311));
        label_12->setStyleSheet(QString::fromUtf8("border:2px solid rgb(177, 0, 3);\n"
"border-radius:15px;\n"
""));
        date = new QLabel(frame_2);
        date->setObjectName("date");
        date->setGeometry(QRect(140, 30, 171, 31));
        date->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        dateolatest = new QDateEdit(frame_2);
        dateolatest->setObjectName("dateolatest");
        dateolatest->setGeometry(QRect(140, 60, 161, 21));
        dateolatest->setFrame(true);
        dateolatest->setMaximumDate(QDate(9999, 10, 30));
        dateolatest->setCalendarPopup(true);
        dateolatest->setTimeSpec(Qt::UTC);
        checkBox = new QCheckBox(frame_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 150, 151, 20));
        checkBox_2 = new QCheckBox(frame_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(20, 180, 101, 20));
        checkBox_3 = new QCheckBox(frame_2);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(180, 180, 101, 20));
        checkBox_4 = new QCheckBox(frame_2);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(20, 210, 101, 20));
        checkBox_5 = new QCheckBox(frame_2);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(180, 150, 101, 20));
        checkBox_6 = new QCheckBox(frame_2);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(180, 210, 101, 20));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 100, 261, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 120, 261, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 240, 261, 21));
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 260, 311, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        radioButton = new QRadioButton(frame_2);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 290, 89, 20));
        label_12->raise();
        label_6->raise();
        ageTB->raise();
        agealertmsg->raise();
        date->raise();
        dateolatest->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        checkBox_4->raise();
        checkBox_5->raise();
        checkBox_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        radioButton->raise();
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
        label->setGeometry(QRect(80, 130, 161, 21));
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
        DonorValidationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DonorValidationClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        DonorValidationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DonorValidationClass);
        mainToolBar->setObjectName("mainToolBar");
        DonorValidationClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DonorValidationClass);
        statusBar->setObjectName("statusBar");
        DonorValidationClass->setStatusBar(statusBar);

        retranslateUi(DonorValidationClass);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(DonorValidationClass);
    } // setupUi

    void retranslateUi(QMainWindow *DonorValidationClass)
    {
        DonorValidationClass->setWindowTitle(QCoreApplication::translate("DonorValidationClass", "Blood Bank Management System", nullptr));
        backimg->setText(QString());
        label_6->setText(QCoreApplication::translate("DonorValidationClass", "Age", nullptr));
        agealertmsg->setText(QCoreApplication::translate("DonorValidationClass", "please provide a valid value", nullptr));
        label_12->setText(QString());
        date->setText(QCoreApplication::translate("DonorValidationClass", "Date Of Lateset Donate", nullptr));
        dateolatest->setDisplayFormat(QCoreApplication::translate("DonorValidationClass", "d/M/yyyy", nullptr));
        checkBox->setText(QCoreApplication::translate("DonorValidationClass", "Blood Pressure Disorders", nullptr));
        checkBox_2->setText(QCoreApplication::translate("DonorValidationClass", "Diabetes", nullptr));
        checkBox_3->setText(QCoreApplication::translate("DonorValidationClass", "Cancer", nullptr));
        checkBox_4->setText(QCoreApplication::translate("DonorValidationClass", "Heart Disorders", nullptr));
        checkBox_5->setText(QCoreApplication::translate("DonorValidationClass", "Thyroid Disease", nullptr));
        checkBox_6->setText(QCoreApplication::translate("DonorValidationClass", "Hepatitis", nullptr));
        label_7->setText(QCoreApplication::translate("DonorValidationClass", "Do You Have Any Of The Diseases", nullptr));
        label_8->setText(QCoreApplication::translate("DonorValidationClass", "Mentioned Below ?", nullptr));
        label_9->setText(QCoreApplication::translate("DonorValidationClass", "Do You Have Any Other Problem ", nullptr));
        label_10->setText(QCoreApplication::translate("DonorValidationClass", "  Including Other Diseases Or Medicine ?", nullptr));
        radioButton->setText(QCoreApplication::translate("DonorValidationClass", "Yes", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("DonorValidationClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("DonorValidationClass", "Submit", nullptr));
        label->setText(QCoreApplication::translate("DonorValidationClass", "  Donor Registration", nullptr));
        label_13->setText(QCoreApplication::translate("DonorValidationClass", "Already have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DonorValidationClass", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonorValidationClass: public Ui_DonorValidationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONORVALIDATION_H
