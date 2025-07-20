/********************************************************************************
** Form generated from reading UI file 'BloodRequest.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOODREQUEST_H
#define UI_BLOODREQUEST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
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

class Ui_BloodRequestClass
{
public:
    QWidget *centralWidget;
    QLabel *name;
    QPushButton *accountF;
    QLabel *user;
    QPushButton *logout;
    QPushButton *accountM;
    QPushButton *request;
    QFrame *pop_2;
    QPushButton *ok;
    QDoubleSpinBox *quant;
    QLineEdit *hos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *back;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BloodRequestClass)
    {
        if (BloodRequestClass->objectName().isEmpty())
            BloodRequestClass->setObjectName("BloodRequestClass");
        BloodRequestClass->resize(919, 612);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RecipientReg/toppng.com-blood-donation-png-picture-blood-donation-logo-3209x3905.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BloodRequestClass->setWindowIcon(icon);
        BloodRequestClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(BloodRequestClass);
        centralWidget->setObjectName("centralWidget");
        name = new QLabel(centralWidget);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 0, 921, 561));
        name->setStyleSheet(QString::fromUtf8(""));
        name->setPixmap(QPixmap(QString::fromUtf8(":/RecipientReg/profile.jpg")));
        name->setScaledContents(true);
        accountF = new QPushButton(centralWidget);
        accountF->setObjectName("accountF");
        accountF->setGeometry(QRect(580, 10, 35, 30));
        QFont font;
        font.setPointSize(7);
        accountF->setFont(font);
        accountF->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        accountF->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/avatar_woman.png);"));
        user = new QLabel(centralWidget);
        user->setObjectName("user");
        user->setGeometry(QRect(560, 30, 81, 31));
        QFont font1;
        font1.setBold(true);
        user->setFont(font1);
        user->setAlignment(Qt::AlignCenter);
        logout = new QPushButton(centralWidget);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(640, 10, 71, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setItalic(false);
        logout->setFont(font2);
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
        accountM->setFont(font);
        accountM->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        accountM->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/avatar_man.png)"));
        request = new QPushButton(centralWidget);
        request->setObjectName("request");
        request->setGeometry(QRect(150, 430, 141, 51));
        request->setFont(font2);
        request->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        request->setStyleSheet(QString::fromUtf8("background-color:rgb(240, 240, 240);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:25px;\n"
"color: rgb(220, 3, 6);\n"
"font: 700 8pt \"Arial\";"));
        request->setCheckable(false);
        request->setAutoDefault(false);
        request->setFlat(false);
        pop_2 = new QFrame(centralWidget);
        pop_2->setObjectName("pop_2");
        pop_2->setGeometry(QRect(280, 160, 381, 211));
        pop_2->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/request.png)\n"
""));
        pop_2->setFrameShape(QFrame::StyledPanel);
        pop_2->setFrameShadow(QFrame::Raised);
        ok = new QPushButton(pop_2);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(130, 110, 111, 41));
        ok->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ok->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/Rectanglered.png);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(220, 3, 6);\n"
"border-radius:20px;\n"
"color: white;\n"
"font: 700 8pt \"Arial\";"));
        quant = new QDoubleSpinBox(centralWidget);
        quant->setObjectName("quant");
        quant->setGeometry(QRect(260, 390, 62, 21));
        quant->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color: rgb(106, 106, 106);\n"
"border-radius:2px;\n"
"color:rgb(0, 0, 0);\n"
"font: 700 8pt \"Arial\";"));
        quant->setMinimum(0.250000000000000);
        quant->setMaximum(5.000000000000000);
        quant->setSingleStep(0.500000000000000);
        hos = new QLineEdit(centralWidget);
        hos->setObjectName("hos");
        hos->setGeometry(QRect(260, 350, 131, 31));
        hos->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color: rgb(106, 106, 106);\n"
"border-radius:8px;\n"
"color: black;\n"
"font: 700 8pt \"Arial\";"));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 90, 321, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label->setFont(font3);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 130, 441, 51));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 200, 441, 51));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 270, 441, 71));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 340, 81, 41));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        label_5->setFont(font4);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 380, 191, 41));
        label_6->setFont(font4);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(120, 490, 221, 31));
        label_7->setStyleSheet(QString::fromUtf8("color:transparent"));
        back = new QPushButton(centralWidget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 480, 31, 41));
        back->setStyleSheet(QString::fromUtf8("border-image:url(:/RecipientReg/arrow.png)"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 530, 81, 16));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(104, 104, 104)"));
        BloodRequestClass->setCentralWidget(centralWidget);
        name->raise();
        request->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        hos->raise();
        quant->raise();
        pop_2->raise();
        label_7->raise();
        accountM->raise();
        accountF->raise();
        logout->raise();
        user->raise();
        back->raise();
        label_8->raise();
        menuBar = new QMenuBar(BloodRequestClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 919, 22));
        BloodRequestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BloodRequestClass);
        mainToolBar->setObjectName("mainToolBar");
        BloodRequestClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BloodRequestClass);
        statusBar->setObjectName("statusBar");
        BloodRequestClass->setStatusBar(statusBar);

        retranslateUi(BloodRequestClass);

        logout->setDefault(false);
        request->setDefault(false);


        QMetaObject::connectSlotsByName(BloodRequestClass);
    } // setupUi

    void retranslateUi(QMainWindow *BloodRequestClass)
    {
        BloodRequestClass->setWindowTitle(QCoreApplication::translate("BloodRequestClass", "Blood Bank Management System", nullptr));
        name->setText(QString());
        accountF->setText(QString());
        user->setText(QCoreApplication::translate("BloodRequestClass", "name", nullptr));
#if QT_CONFIG(tooltip)
        logout->setToolTip(QCoreApplication::translate("BloodRequestClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        logout->setText(QCoreApplication::translate("BloodRequestClass", "Log Out", nullptr));
        accountM->setText(QString());
#if QT_CONFIG(tooltip)
        request->setToolTip(QCoreApplication::translate("BloodRequestClass", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        request->setText(QCoreApplication::translate("BloodRequestClass", "Request", nullptr));
        ok->setText(QCoreApplication::translate("BloodRequestClass", "Ok", nullptr));
        label->setText(QCoreApplication::translate("BloodRequestClass", "Here Some Tips Before Recieving Blood :", nullptr));
        label_2->setText(QCoreApplication::translate("BloodRequestClass", "Ask questions: Before accepting a blood transfusion, ask your healthcare provider\n"
"about the risks and benefits of the procedure. Make sure you fully understand why \n"
"a transfusion is necessary and what to expect.", nullptr));
        label_3->setText(QCoreApplication::translate("BloodRequestClass", "Consider alternatives: In some cases, there may be alternatives to a blood \n"
"transfusion, such as medications or other treatments. Ask your healthcare \n"
"provider about these options and if they are appropriate for your situation.", nullptr));
        label_4->setText(QCoreApplication::translate("BloodRequestClass", "Prepare for the procedure: If you decide to go ahead with a blood transfusion, \n"
"make sure you are well-rested and hydrated before the procedure. Follow any \n"
"instructions provided by your healthcare provider, such as fasting or stopping \n"
"certain medications.", nullptr));
        label_5->setText(QCoreApplication::translate("BloodRequestClass", "Hospital", nullptr));
        label_6->setText(QCoreApplication::translate("BloodRequestClass", "How much blood you will recieve", nullptr));
        label_7->setText(QCoreApplication::translate("BloodRequestClass", "Blood request completed,Thank you.", nullptr));
        back->setText(QString());
        label_8->setText(QCoreApplication::translate("BloodRequestClass", "Previous Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BloodRequestClass: public Ui_BloodRequestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOODREQUEST_H
