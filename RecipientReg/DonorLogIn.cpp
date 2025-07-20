#include "DonorLogIn.h"
#include "FirstPage.h"
#include "DonorValidation.h"
#include "DonorInterface.h"
#include"Donor.h"
#include<qdebug.h>
DonorLogIn::DonorLogIn(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &DonorLogIn::LogInButtonclicked);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &DonorLogIn::RegButtonclicked);
    connect(ui.back, &QPushButton::clicked, this, &DonorLogIn::backButtonclicked);
}
void DonorLogIn::LogInButtonclicked() {
 
    map<string, Donor> mp = r.fromfiletomap();
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

    if (ui.mailTB->text().toStdString() == "" || ui.passwordTB->text().toStdString() == "")
        ;
    else {


        if (r.login(mp, mail, pass) == true) {
              DonorInterface* f = new DonorInterface(r);
              this->hide();
              f->show();

        }
        else
        {
            ui.wrong->setStyleSheet("color:red");


        }
    }

}
bool DonorLogIn::backButtonclicked() {
    FirstPage* r = new FirstPage();
    this->hide();
    r->show();
    return true;

}
void DonorLogIn::RegButtonclicked() {
    DonorValidation* r = new DonorValidation();
    this->hide();
    r->show();
   

}
DonorLogIn::~DonorLogIn()
{}
