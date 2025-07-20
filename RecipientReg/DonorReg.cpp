#include "DonorReg.h"
#include "RecipientReg.h"
#include "Donor.h"
#include"DonorLogIn.h"
#include<qpushbutton.h>
#include<string>
#include<QDate>
#include<iostream>
using namespace std;
DonorReg::DonorReg(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &DonorReg::RegButtonclicked);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &DonorReg::LogInButtonclicked);

}
bool DonorReg::RegButtonclicked() {
    Donor newmember;
    if (ui.idTB->text().toStdString() == "")
        ui.idalertmsg->setStyleSheet("color:red");
    else {
        newmember.id = ui.idTB->text().toInt();
        ui.idalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
    }
    if (ui.nameTB->text().toStdString() == "")
        ui.namealertmsg->setStyleSheet("color:red");
    else {
        ui.namealertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        newmember.name = ui.nameTB->text().toStdString();
    }
    if (ui.mailTB->text().toStdString() == "")
        ui.mailalertmsg->setStyleSheet("color:red");
    else {
        ui.mailalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        newmember.mail = ui.mailTB->text().toStdString();
    }
    if (ui.ageTB->text().toStdString() == "")
        ui.agealertmsg->setStyleSheet("color:red");
    else {
        ui.agealertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        newmember.age = ui.ageTB->text().toInt();
    }
    if (ui.passwordTB->text().toStdString() == "")
        ui.passwordalertmsg->setStyleSheet("color:red");
    else {
        ui.passwordalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        newmember.password = ui.passwordTB->text().toStdString();
    }
    if (ui.pw2TB->text().toStdString() == "")
        ui.cpalertmsg->setStyleSheet("color:red");
    else {
        if (ui.pw2TB->text().toStdString() != ui.passwordTB->text().toStdString()) {
            ui.cpalertmsg->setStyleSheet("color:red");
        }
        else {
            ui.cpalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        }
    }
    if (!ui.femaleRB->isChecked() && !ui.maleRB->isChecked())
        ui.genderalertmsg->setStyleSheet("color:red");
    else {
        ui.genderalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        if (ui.femaleRB->isChecked())
            newmember.gender = "female";
        else
            newmember.gender = "male";
    }
    newmember.bloodType = ui.bloodTypeTB->currentText().toStdString();
    newmember.DateOflatestDonate = ui.dateolatest->date().toString("d/M/yyyy").toStdString();
    if (ui.idTB->text().toStdString() == "" || ui.nameTB->text().toStdString() == "" || ui.mailTB->text().toStdString() == "" ||
        ui.ageTB->text().toStdString() == "" || ui.passwordTB->text().toStdString() == "" || ui.pw2TB->text().toStdString() == "" ||
        ui.pw2TB->text().toStdString() != ui.passwordTB->text().toStdString() || !ui.femaleRB->isChecked() && !ui.maleRB->isChecked()||newmember.Register(newmember.mail,newmember.password )==false) {
        return false;
    }
    else {
        string mail = newmember.mail;
        map<string, Donor> newmemberdata;
        newmemberdata = newmember.fromfiletomap();
        newmemberdata[mail].age = newmember.age;
        newmemberdata[mail].name = newmember.name;
        newmemberdata[mail].mail = newmember.mail;
        newmemberdata[mail].gender = newmember.gender;
        newmemberdata[mail].bloodType = newmember.bloodType;
        newmemberdata[mail].password = newmember.password;
        newmemberdata[mail].id = newmember.id;
        newmemberdata[mail].DateOflatestDonate = newmember.DateOflatestDonate;
        newmember.frommaptofile(newmemberdata);
        DonorLogIn* l = new DonorLogIn();
        this->hide();
        l->show();
        return true;
    }
}
bool DonorReg::LogInButtonclicked() {
    DonorLogIn* l = new DonorLogIn();
    this->hide();
    l->show();
    return true;

}
DonorReg::~DonorReg()
{}
