/********************************************************************************
** Form generated from reading UI file 'RecipientReg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPIENTREG_H
#define UI_RECIPIENTREG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_RecipientRegClass
{
public:
    QWidget *centralWidget;
    QLabel *backimg;
    QFrame *frame_2;
    QLabel *label_2;
    QLineEdit *idTB;
    QLabel *label_3;
    QLineEdit *mailTB;
    QLabel *label_5;
    QLineEdit *passwordTB;
    QLabel *label_8;
    QRadioButton *maleRB;
    QRadioButton *femaleRB;
    QLabel *label_10;
    QLineEdit *hospitalTB;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *idalertmsg;
    QLabel *mailalertmsg;
    QLabel *passwordalertmsg;
    QLabel *genderalertmsg;
    QLabel *hospitalalertmsg;
    QLineEdit *nameTB;
    QLineEdit *ageTB;
    QLabel *agealertmsg;
    QLineEdit *pw2TB;
    QLabel *cpalertmsg;
    QComboBox *bloodTypeTB;
    QLineEdit *doctorTB;
    QLabel *doctoralertmsg;
    QLabel *namealertmsg;
    QLabel *label_12;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RecipientRegClass)
    {
        if (RecipientRegClass->objectName().isEmpty())
            RecipientRegClass->setObjectName("RecipientRegClass");
        RecipientRegClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        RecipientRegClass->setWindowIcon(icon);
        RecipientRegClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(RecipientRegClass);
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
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 21, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        idTB = new QLineEdit(frame_2);
        idTB->setObjectName("idTB");
        idTB->setGeometry(QRect(10, 51, 140, 20));
        idTB->setFont(font);
        idTB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        idTB->setFrame(true);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 51, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        mailTB = new QLineEdit(frame_2);
        mailTB->setObjectName("mailTB");
        mailTB->setGeometry(QRect(10, 106, 140, 20));
        mailTB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 140, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        passwordTB = new QLineEdit(frame_2);
        passwordTB->setObjectName("passwordTB");
        passwordTB->setGeometry(QRect(10, 166, 140, 20));
        passwordTB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        passwordTB->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 190, 81, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        maleRB = new QRadioButton(frame_2);
        maleRB->setObjectName("maleRB");
        maleRB->setGeometry(QRect(10, 220, 89, 20));
        femaleRB = new QRadioButton(frame_2);
        femaleRB->setObjectName("femaleRB");
        femaleRB->setGeometry(QRect(90, 220, 61, 20));
        femaleRB->setStyleSheet(QString::fromUtf8("border-color:red"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 250, 91, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        hospitalTB = new QLineEdit(frame_2);
        hospitalTB->setObjectName("hospitalTB");
        hospitalTB->setGeometry(QRect(10, 280, 140, 20));
        hospitalTB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 20, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(180, 80, 51, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(180, 140, 131, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(180, 190, 121, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(180, 250, 151, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        idalertmsg = new QLabel(frame_2);
        idalertmsg->setObjectName("idalertmsg");
        idalertmsg->setGeometry(QRect(10, 70, 151, 16));
        QFont font1;
        font1.setPointSize(7);
        font1.setUnderline(false);
        idalertmsg->setFont(font1);
        idalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        mailalertmsg = new QLabel(frame_2);
        mailalertmsg->setObjectName("mailalertmsg");
        mailalertmsg->setGeometry(QRect(10, 130, 151, 16));
        mailalertmsg->setFont(font1);
        mailalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        passwordalertmsg = new QLabel(frame_2);
        passwordalertmsg->setObjectName("passwordalertmsg");
        passwordalertmsg->setGeometry(QRect(10, 180, 151, 21));
        passwordalertmsg->setFont(font1);
        passwordalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        genderalertmsg = new QLabel(frame_2);
        genderalertmsg->setObjectName("genderalertmsg");
        genderalertmsg->setGeometry(QRect(10, 240, 151, 16));
        genderalertmsg->setFont(font1);
        genderalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        hospitalalertmsg = new QLabel(frame_2);
        hospitalalertmsg->setObjectName("hospitalalertmsg");
        hospitalalertmsg->setGeometry(QRect(10, 300, 151, 16));
        hospitalalertmsg->setFont(font1);
        hospitalalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        nameTB = new QLineEdit(frame_2);
        nameTB->setObjectName("nameTB");
        nameTB->setGeometry(QRect(180, 50, 140, 20));
        nameTB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        ageTB = new QLineEdit(frame_2);
        ageTB->setObjectName("ageTB");
        ageTB->setGeometry(QRect(180, 106, 140, 20));
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
        agealertmsg->setGeometry(QRect(180, 130, 151, 16));
        agealertmsg->setFont(font1);
        agealertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        pw2TB = new QLineEdit(frame_2);
        pw2TB->setObjectName("pw2TB");
        pw2TB->setGeometry(QRect(180, 166, 140, 20));
        pw2TB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        pw2TB->setEchoMode(QLineEdit::Password);
        cpalertmsg = new QLabel(frame_2);
        cpalertmsg->setObjectName("cpalertmsg");
        cpalertmsg->setGeometry(QRect(180, 180, 141, 21));
        cpalertmsg->setFont(font1);
        cpalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        bloodTypeTB = new QComboBox(frame_2);
        bloodTypeTB->addItem(QString());
        bloodTypeTB->addItem(QString());
        bloodTypeTB->addItem(QString());
        bloodTypeTB->addItem(QString());
        bloodTypeTB->addItem(QString());
        bloodTypeTB->addItem(QString());
        bloodTypeTB->addItem(QString());
        bloodTypeTB->addItem(QString());
        bloodTypeTB->setObjectName("bloodTypeTB");
        bloodTypeTB->setGeometry(QRect(180, 220, 140, 20));
        bloodTypeTB->setStyleSheet(QString::fromUtf8("QCompoPox{\n"
"border:1px solid rgb(130, 130, 130) ;\n"
"border-radius:15px solid;\n"
"}\n"
"\n"
"CompoPox:focus{\n"
"border:1px solid rgb(175, 175, 175) ;\n"
"border-radius:15px solid;\n"
"border-bottom:2px solid rgb(157, 0, 3);\n"
"}\n"
""));
        doctorTB = new QLineEdit(frame_2);
        doctorTB->setObjectName("doctorTB");
        doctorTB->setGeometry(QRect(180, 280, 140, 20));
        doctorTB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        doctoralertmsg = new QLabel(frame_2);
        doctoralertmsg->setObjectName("doctoralertmsg");
        doctoralertmsg->setGeometry(QRect(180, 300, 151, 16));
        doctoralertmsg->setFont(font1);
        doctoralertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        namealertmsg = new QLabel(frame_2);
        namealertmsg->setObjectName("namealertmsg");
        namealertmsg->setGeometry(QRect(180, 70, 141, 16));
        namealertmsg->setFont(font1);
        namealertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 10, 331, 311));
        label_12->setStyleSheet(QString::fromUtf8("border:2px solid rgb(177, 0, 3);\n"
"border-radius:15px;\n"
""));
        label_12->raise();
        label_2->raise();
        idTB->raise();
        label_3->raise();
        mailTB->raise();
        label_5->raise();
        passwordTB->raise();
        label_8->raise();
        maleRB->raise();
        femaleRB->raise();
        label_10->raise();
        hospitalTB->raise();
        label_4->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
        label_11->raise();
        idalertmsg->raise();
        mailalertmsg->raise();
        passwordalertmsg->raise();
        genderalertmsg->raise();
        hospitalalertmsg->raise();
        nameTB->raise();
        ageTB->raise();
        agealertmsg->raise();
        pw2TB->raise();
        cpalertmsg->raise();
        bloodTypeTB->raise();
        doctorTB->raise();
        doctoralertmsg->raise();
        namealertmsg->raise();
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
        label->setGeometry(QRect(80, 130, 191, 21));
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
        RecipientRegClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RecipientRegClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        RecipientRegClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RecipientRegClass);
        mainToolBar->setObjectName("mainToolBar");
        RecipientRegClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RecipientRegClass);
        statusBar->setObjectName("statusBar");
        RecipientRegClass->setStatusBar(statusBar);

        retranslateUi(RecipientRegClass);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(RecipientRegClass);
    } // setupUi

    void retranslateUi(QMainWindow *RecipientRegClass)
    {
        RecipientRegClass->setWindowTitle(QCoreApplication::translate("RecipientRegClass", "Blood Bank Management System", nullptr));
        backimg->setText(QString());
        label_2->setText(QCoreApplication::translate("RecipientRegClass", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("RecipientRegClass", "Mail", nullptr));
        label_5->setText(QCoreApplication::translate("RecipientRegClass", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("RecipientRegClass", "Gender", nullptr));
        maleRB->setText(QCoreApplication::translate("RecipientRegClass", "Male", nullptr));
        femaleRB->setText(QCoreApplication::translate("RecipientRegClass", "Female", nullptr));
        label_10->setText(QCoreApplication::translate("RecipientRegClass", "Hospital", nullptr));
        label_4->setText(QCoreApplication::translate("RecipientRegClass", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("RecipientRegClass", "Age", nullptr));
        label_7->setText(QCoreApplication::translate("RecipientRegClass", "Confirm Password", nullptr));
        label_9->setText(QCoreApplication::translate("RecipientRegClass", "Blood Type", nullptr));
        label_11->setText(QCoreApplication::translate("RecipientRegClass", "Doctor Of Case", nullptr));
        idalertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        mailalertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        passwordalertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        genderalertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        hospitalalertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        agealertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        pw2TB->setText(QString());
        cpalertmsg->setText(QCoreApplication::translate("RecipientRegClass", "Please make sure passwords match", nullptr));
        bloodTypeTB->setItemText(0, QCoreApplication::translate("RecipientRegClass", "A+", nullptr));
        bloodTypeTB->setItemText(1, QCoreApplication::translate("RecipientRegClass", "A-", nullptr));
        bloodTypeTB->setItemText(2, QCoreApplication::translate("RecipientRegClass", "AB+", nullptr));
        bloodTypeTB->setItemText(3, QCoreApplication::translate("RecipientRegClass", "AB-", nullptr));
        bloodTypeTB->setItemText(4, QCoreApplication::translate("RecipientRegClass", "B+", nullptr));
        bloodTypeTB->setItemText(5, QCoreApplication::translate("RecipientRegClass", "B-", nullptr));
        bloodTypeTB->setItemText(6, QCoreApplication::translate("RecipientRegClass", "O+", nullptr));
        bloodTypeTB->setItemText(7, QCoreApplication::translate("RecipientRegClass", "O-", nullptr));

        doctoralertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        namealertmsg->setText(QCoreApplication::translate("RecipientRegClass", "please provide a valid value", nullptr));
        label_12->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("RecipientRegClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("RecipientRegClass", "Register", nullptr));
        label->setText(QCoreApplication::translate("RecipientRegClass", "  Recipient Registration", nullptr));
        label_13->setText(QCoreApplication::translate("RecipientRegClass", "Already have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RecipientRegClass", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipientRegClass: public Ui_RecipientRegClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPIENTREG_H
