#include "RecipientReg.h"
#include "recipient.h"
#include<qpushbutton.h>
#include<string>
#include<iostream>
using namespace std;
RecipientReg::RecipientReg(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //  ui.setupUi("RecipientReg.ui");
    connect(ui.pushButton, &QPushButton::clicked, this, &RecipientReg::RegButtonclicked);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &RecipientReg::LogInButtonclicked);

}

bool RecipientReg::RegButtonclicked() {
    recipient newmember;
    map<string, recipient> newmemberdata;
    try {
        newmemberdata = newmember.fromfiletomap();
    } catch (const std::exception& e) {
        std::cerr << "Exception during fromfiletomap(): " << e.what() << std::endl;
        return false;
    }
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
    if (ui.mailTB->text().toStdString() == "" || newmemberdata.find(ui.mailTB->text().toStdString()) != newmemberdata.end())
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
            newmember.pw2 = ui.pw2TB->text().toStdString();
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
    if (ui.hospitalTB->text().toStdString() == "")
        ui.hospitalalertmsg->setStyleSheet("color:red");
    else {
        ui.hospitalalertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        newmember.hospital = ui.hospitalTB->text().toStdString();
    }
    if (ui.doctorTB->text().toStdString() == "")
        ui.doctoralertmsg->setStyleSheet("color:red");
    else {
        ui.doctoralertmsg->setStyleSheet("color:rgb(240, 240, 240)");
        newmember.doctor = ui.doctorTB->text().toStdString();
    }
    if (ui.idTB->text().toStdString() == "" || ui.nameTB->text().toStdString() == "" || ui.mailTB->text().toStdString() == "" ||
        ui.ageTB->text().toStdString() == "" || ui.passwordTB->text().toStdString() == "" || ui.pw2TB->text().toStdString() == "" ||
        ui.pw2TB->text().toStdString() != ui.passwordTB->text().toStdString() || !ui.femaleRB->isChecked() && !ui.maleRB->isChecked() ||
        ui.hospitalTB->text().toStdString() == "" || ui.doctorTB->text().toStdString() == "" || newmemberdata.find(ui.mailTB->text().toStdString()) != newmemberdata.end() || newmember.Register(newmember.mail, newmember.password) == false) {
        return false;
    }
    else {
        string mail = newmember.mail;
        newmemberdata[mail].age = newmember.age;
        newmemberdata[mail].name = newmember.name;
        newmemberdata[mail].mail = newmember.mail;
        newmemberdata[mail].gender = newmember.gender;
        newmemberdata[mail].hospital = newmember.hospital;
        newmemberdata[mail].doctor = newmember.doctor;
        newmemberdata[mail].bloodType = newmember.bloodType;
        newmemberdata[mail].password = newmember.password;
        newmemberdata[mail].id = newmember.id;
        newmemberdata[mail].pw2 = newmember.pw2;
        newmember.frommaptofile(newmemberdata);
        RecipientLogIn* l = new RecipientLogIn();
        this->hide();
        l->show();
        return true;
    }
}
bool RecipientReg::LogInButtonclicked() {
    RecipientLogIn* l = new RecipientLogIn();
    this->hide();
    l->show();
    return true;

}
RecipientReg::~RecipientReg()
{
}
