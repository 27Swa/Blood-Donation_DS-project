/********************************************************************************
** Form generated from reading UI file 'DonorLogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONORLOGIN_H
#define UI_DONORLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DonorLogInClass
{
public:
    QWidget *centralWidget;
    QLabel *backimg;
    QFrame *frame_2;
    QLabel *label_3;
    QLineEdit *mailTB;
    QLabel *label_5;
    QLineEdit *passwordTB;
    QLabel *mailalertmsg;
    QLabel *passwordalertmsg;
    QLabel *label_12;
    QLabel *wrong;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QPushButton *back;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DonorLogInClass)
    {
        if (DonorLogInClass->objectName().isEmpty())
            DonorLogInClass->setObjectName("DonorLogInClass");
        DonorLogInClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DonorLogInClass->setWindowIcon(icon);
        DonorLogInClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(DonorLogInClass);
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
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 50, 51, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"Arial\";"));
        mailTB = new QLineEdit(frame_2);
        mailTB->setObjectName("mailTB");
        mailTB->setGeometry(QRect(20, 90, 290, 35));
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
        label_5->setGeometry(QRect(20, 170, 111, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"Arial\";"));
        passwordTB = new QLineEdit(frame_2);
        passwordTB->setObjectName("passwordTB");
        passwordTB->setGeometry(QRect(20, 210, 290, 35));
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
        mailalertmsg = new QLabel(frame_2);
        mailalertmsg->setObjectName("mailalertmsg");
        mailalertmsg->setGeometry(QRect(20, 130, 171, 16));
        QFont font1;
        font1.setPointSize(9);
        font1.setUnderline(false);
        mailalertmsg->setFont(font1);
        mailalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        passwordalertmsg = new QLabel(frame_2);
        passwordalertmsg->setObjectName("passwordalertmsg");
        passwordalertmsg->setGeometry(QRect(20, 250, 191, 21));
        passwordalertmsg->setFont(font1);
        passwordalertmsg->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 10, 331, 311));
        label_12->setStyleSheet(QString::fromUtf8("border:2px solid rgb(177, 0, 3);\n"
"border-radius:15px;\n"
""));
        wrong = new QLabel(frame_2);
        wrong->setObjectName("wrong");
        wrong->setGeometry(QRect(80, 290, 191, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setUnderline(false);
        wrong->setFont(font2);
        wrong->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);"));
        label_12->raise();
        label_3->raise();
        mailTB->raise();
        label_5->raise();
        passwordTB->raise();
        mailalertmsg->raise();
        passwordalertmsg->raise();
        wrong->raise();
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
        label->setGeometry(QRect(80, 130, 111, 21));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"background-color:rgb(240, 240, 240)"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(130, 520, 141, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 521, 61, 20));
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:rgb(57, 163, 255);\n"
"background-color:transparent;\n"
"border-radius:25px;\n"
"font: 700 9pt \"Segoe UI\";"));
        pushButton_2->setFlat(true);
        back = new QPushButton(centralWidget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 500, 20, 31));
        back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/arrow.png)"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 530, 81, 16));
        QFont font3;
        font3.setPointSize(6);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(116, 116, 116)"));
        DonorLogInClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DonorLogInClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        DonorLogInClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DonorLogInClass);
        mainToolBar->setObjectName("mainToolBar");
        DonorLogInClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DonorLogInClass);
        statusBar->setObjectName("statusBar");
        DonorLogInClass->setStatusBar(statusBar);

        retranslateUi(DonorLogInClass);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(DonorLogInClass);
    } // setupUi

    void retranslateUi(QMainWindow *DonorLogInClass)
    {
        DonorLogInClass->setWindowTitle(QCoreApplication::translate("DonorLogInClass", "Blood Bank Management System", nullptr));
        backimg->setText(QString());
        label_3->setText(QCoreApplication::translate("DonorLogInClass", "Mail", nullptr));
        label_5->setText(QCoreApplication::translate("DonorLogInClass", "Password", nullptr));
        mailalertmsg->setText(QCoreApplication::translate("DonorLogInClass", "please provide a valid value", nullptr));
        passwordalertmsg->setText(QCoreApplication::translate("DonorLogInClass", "please provide a valid value", nullptr));
        label_12->setText(QString());
        wrong->setText(QCoreApplication::translate("DonorLogInClass", "Wrong mail or password", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("DonorLogInClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("DonorLogInClass", "Log In", nullptr));
        label->setText(QCoreApplication::translate("DonorLogInClass", "  Donor Log In", nullptr));
        label_13->setText(QCoreApplication::translate("DonorLogInClass", "Don't have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DonorLogInClass", "Register", nullptr));
        back->setText(QString());
        label_2->setText(QCoreApplication::translate("DonorLogInClass", "Previous page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonorLogInClass: public Ui_DonorLogInClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONORLOGIN_H
