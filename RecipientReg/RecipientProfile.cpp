#include "RecipientProfile.h"
#include"FirstPage.h"
#include"RecipientInterface.h"
#include<QDate>
RecipientProfile::RecipientProfile(recipient &r,QWidget *parent)
	: QMainWindow(parent)
{
	currentrec.age = r.age;
	currentrec.mail = r.mail;
	currentrec.bloodType = r.bloodType;
	currentrec.name = r.name;
	currentrec.doctor = r.doctor;
	currentrec.hospital = r.hospital;
	currentrec.password = r.password;
	currentrec.id = r.id;
	currentrec.gender = r.gender;
	ui.setupUi(this);
	if (currentrec.gender == "female") {
		ui.malephoto->hide();
		ui.femalephoto->show();
		ui.f->setChecked(true);
	}
	else
	{
		ui.m->setChecked(true);
		ui.malephoto->show();
		ui.femalephoto->hide();
	}
	qInfo() << currentrec.id;
	ui.name->setText(QString::fromStdString(currentrec.name));
	ui.name_2->setText(QString::fromStdString(currentrec.name));
	ui.age->setText(QString::fromStdString(to_string(currentrec.age)));
	ui.id->setText(QString::fromStdString(to_string(currentrec.id)));
	ui.mail->setText(QString::fromStdString(currentrec.mail));
	ui.pass->setText(QString::fromStdString(currentrec.password));
	ui.blood->setCurrentText(QString::fromStdString(currentrec.bloodType));
	ui.doctor->setText(QString::fromStdString(currentrec.doctor));
	ui.hospital->setText(QString::fromStdString(currentrec.hospital));
	connect(ui.save, &QPushButton::clicked, this, &RecipientProfile::saveButtonClicked);
	connect(ui.delete_2, &QPushButton::clicked, this, &RecipientProfile::deleteButtonClicked);
	connect(ui.back, &QPushButton::clicked, this, &RecipientProfile::backButtonClicked);
}
bool RecipientProfile::saveButtonClicked() {
	map<string, recipient> mp;
	mp = currentrec.fromfiletomap();
	currentrec.Delete(mp, currentrec.mail);
	currentrec.name = ui.name_2->text().toStdString();
	currentrec.mail = ui.mail->text().toStdString();
	currentrec.age = ui.age->text().toInt();
	currentrec.id = ui.id->text().toInt();
	if (ui.f->isChecked())
		currentrec.gender = "female";
	else
		currentrec.gender = "male";
	currentrec.bloodType = ui.blood->currentText().toStdString();
	currentrec.hospital = ui.hospital->text().toStdString();
	currentrec.doctor = ui.doctor->text().toStdString();
	currentrec.password = ui.pass->text().toStdString();
	mp[currentrec.mail].age = currentrec.age;
	mp[currentrec.mail].mail = currentrec.mail;
	mp[currentrec.mail].hospital = currentrec.hospital;
	mp[currentrec.mail].doctor = currentrec.doctor;
	mp[currentrec.mail].password = currentrec.password;
	mp[currentrec.mail].gender = currentrec.gender;
	mp[currentrec.mail].id = currentrec.id;
	mp[currentrec.mail].bloodType = currentrec.bloodType;
	mp[currentrec.mail].name = currentrec.name;
	currentrec.frommaptofile(mp);
	ui.name->setText(QString::fromStdString(currentrec.name));
	return true;
}
bool RecipientProfile::deleteButtonClicked() {
	map<string, recipient> mp;
	mp = currentrec.fromfiletomap();
	currentrec.Delete(mp, currentrec.mail);
	currentrec.frommaptofile(mp);
	FirstPage* f = new FirstPage();
	this->hide();
	f->show();
	return true;
}
bool RecipientProfile::backButtonClicked() {

	RecipientInterface* f = new RecipientInterface(currentrec);
	this->hide();
	f->show();
	return true;
}
RecipientProfile::~RecipientProfile()
{}
