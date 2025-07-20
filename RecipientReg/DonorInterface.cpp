#include "DonorInterface.h"
#include "DonorProfile.h"
#include "DonationRequest.h"
#include <QMessageBox>
#include "FirstPage.h"
#include<qstring.h>
#include<Qlabel.h>
#include"DonationValidation.h"
DonorInterface::DonorInterface(Donor &d,QWidget *parent)
	: QMainWindow(parent)
{
	currentdonor.age = d.age;
	currentdonor.name = d.name;
	currentdonor.mail = d.mail;
	currentdonor.id = d.id;
	currentdonor.gender = d.gender;
	currentdonor.password = d.password;
	currentdonor.DateOflatestDonate = d.DateOflatestDonate;
	currentdonor.bloodType = d.bloodType;
	ui.setupUi(this);
	if (currentdonor.gender == "female") {
		ui.accountM->hide();
		ui.accountF->show();
	}
	else
	{
		ui.accountM->show();
		ui.accountF->hide();
	}
	ui.frame->hide();
	connect(ui.accountM, &QPushButton::clicked, this, &DonorInterface::profileButtonClicked);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &DonorInterface::okButtonClicked);
	connect(ui.accountF, &QPushButton::clicked, this, &DonorInterface::profileButtonClicked);
	connect(ui.logout, &QPushButton::clicked, this, &DonorInterface::logoutButtonClicked);
	connect(ui.pushButton, &QPushButton::clicked, this, &DonorInterface::donateButtonClicked);
	ui.user->setText(QString::fromStdString(currentdonor.name));
	
}
bool DonorInterface::profileButtonClicked() {
	DonorProfile* d = new DonorProfile(currentdonor);
	this->hide();
	d->show();
	return true;
}
bool DonorInterface::logoutButtonClicked() {
	FirstPage* f = new FirstPage();
	this->hide();
	f->show();
	return true;

}
bool DonorInterface::donateButtonClicked() {
	
	if (((QDate::fromString(QString::fromStdString(currentdonor.DateOflatestDonate), "d/M/yyyy")).daysTo(QDate::currentDate())) < 90) {
		ui.frame->show();
	}
	else {
		DonationValidation* f = new DonationValidation(currentdonor);
		this->hide();
		f->show();

	}
	return true;

}
bool DonorInterface::okButtonClicked() {

	ui.frame->hide();
	return true;

}
DonorInterface::~DonorInterface()
{}
