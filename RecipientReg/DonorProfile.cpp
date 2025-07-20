#include "DonorProfile.h"
#include "FirstPage.h"
#include "DonorInterface.h"
#include<qdebug.h>
#include<QDate>
#include<map>
DonorProfile::DonorProfile(Donor & user,QWidget *parent)
	: QMainWindow(parent)
{    
	d.age = user.age;
	d.mail = user.mail;
	d.bloodType = user.bloodType;
	d.name = user.name;
	d.DateOflatestDonate = user.DateOflatestDonate;
	d.password = user.password;
	d.id = user.id;
	d.gender = user.gender;
	ui.setupUi(this);
	if (d.gender == "female") {
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
	qInfo() << d.id;
	ui.name->setText(QString::fromStdString(d.name));
	ui.name_2->setText(QString::fromStdString(d.name));
	ui.age->setText(QString::fromStdString(to_string(d.age)));
	ui.id->setText(QString::fromStdString(to_string(d.id)));
	ui.mail->setText(QString::fromStdString(d.mail));
	ui.pass->setText(QString::fromStdString(d.password));
	ui.blood->setCurrentText(QString::fromStdString(d.bloodType));
	ui.date->setDate(QDate::fromString(QString::fromStdString(d.DateOflatestDonate),"d/M/yyyy"));
	connect(ui.save, &QPushButton::clicked, this, &DonorProfile::saveButtonClicked);
	connect(ui.delete_2, &QPushButton::clicked, this, &DonorProfile::deleteButtonClicked);
	connect(ui.back, &QPushButton::clicked, this, &DonorProfile::backButtonClicked);
}
bool DonorProfile::saveButtonClicked() {
	map<string, Donor> mp;
	mp = d.fromfiletomap();
	d.Delete(mp, d.mail);
	d.name = ui.name_2->text().toStdString();
	d.mail = ui.mail->text().toStdString();
	d.age = ui.age->text().toInt();
	d.id = ui.id->text().toInt();
	if (ui.f->isChecked())
		d.gender = "female";
	else
		d.gender = "male";
	d.bloodType = ui.blood->currentText().toStdString();
	
	d.DateOflatestDonate = ui.date->date().toString("d/M/yyyy").toStdString();
	d.password = ui.pass->text().toStdString();
	mp[d.mail].age = d.age;
	mp[d.mail].mail = d.mail;
	mp[d.mail].DateOflatestDonate = d.DateOflatestDonate;
	mp[d.mail].password = d.password;
	mp[d.mail].gender = d.gender;
	mp[d.mail].id = d.id;
	mp[d.mail].bloodType = d.bloodType;
	mp[d.mail].name = d.name;
	d.frommaptofile(mp);
	ui.name->setText(QString::fromStdString(d.name));
	return true;
}
bool DonorProfile::deleteButtonClicked() {
	map<string, Donor> mp;
	mp = d.fromfiletomap();
	d.Delete(mp, d.mail);
	d.frommaptofile(mp);
	FirstPage* f = new FirstPage();
	this->hide();
	f->show();
	return true;
}
bool DonorProfile::backButtonClicked() {
	
	DonorInterface* f = new DonorInterface(d);
	this->hide();
	f->show();
	return true;
}
DonorProfile::~DonorProfile()
{
	
}
