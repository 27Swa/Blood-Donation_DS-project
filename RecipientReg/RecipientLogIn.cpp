#include "RecipientLogIn.h"
#include"RecipientReg.h"
#include "FirstPage.h"
#include"RecipientInterface.h"
#include"recipient.h"
#include<qpushbutton.h>
#include<string>
#include<iostream>
using namespace std;
RecipientLogIn::RecipientLogIn(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &RecipientLogIn::LogInButtonclicked);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &RecipientLogIn::RegButtonclicked);
    connect(ui.back, &QPushButton::clicked, this, &RecipientLogIn::backButtonclicked);
}
 void RecipientLogIn::LogInButtonclicked() {
    
     map<string, recipient> mp = r.fromfiletomap();
     string mail;
     string pass;
     if (ui.mailTB->text().toStdString() == "")
         ui.mailalertmsg->setStyleSheet("color:red");
     else {
         ui.mailalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
         mail = ui.mailTB->text().toStdString();
     }
     if (ui.passwordTB->text().toStdString() == "")
         ui.passwordalertmsg->setStyleSheet("color:red");
     else {
         ui.passwordalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        pass = ui.passwordTB->text().toStdString();
     }
   
     if (!(ui.mailTB->text().toStdString() == "" || ui.passwordTB->text().toStdString() == "")){
    
         qInfo() << r.login(mp, mail, pass);
         qInfo() << mail;
         qInfo() << pass;
         if (r.login(mp, mail, pass)==true) {
             RecipientInterface* f = new RecipientInterface(r);
             this->hide();
             f->show();

         }
         else
         {
          ui.wrong->setStyleSheet("color:red");
          
             
         }
     }

}
 bool RecipientLogIn::backButtonclicked() {
     FirstPage* f = new FirstPage();
     this->hide();
     f->show();
     return true;

 }
 void RecipientLogIn::RegButtonclicked() {
     RecipientReg* f = new RecipientReg();
     this->hide();
     f->show();


 }
RecipientLogIn::~RecipientLogIn()
{}
