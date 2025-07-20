#include "BloodRequest.h"
#include"RecipientInterface.h"
#include"RecipientProfile.h"
#include"FirstPage.h"
#include"Donor.h"
BloodRequest::BloodRequest(recipient& r,QWidget *parent)
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
		ui.accountM->hide();
		ui.accountF->show();
	}
	else
	{
		ui.accountM->show();
		ui.accountF->hide();
	}
	qInfo() << currentrec.id;
	ui.user->setText(QString::fromStdString(currentrec.name));
	ui.pop_2->hide();
	connect(ui.request, &QPushButton::clicked, this, &BloodRequest::requestButtonClicked);
	connect(ui.logout, &QPushButton::clicked, this, &BloodRequest::logoutButtonClicked);
	connect(ui.back, &QPushButton::clicked, this, &BloodRequest::backButtonClicked);
	connect(ui.ok, &QPushButton::clicked, this, &BloodRequest::okButtonClicked);
	connect(ui.accountF, &QPushButton::clicked, this, &BloodRequest::profileButtonClicked);
	connect(ui.accountM, &QPushButton::clicked, this, &BloodRequest::profileButtonClicked);
}
bool BloodRequest::backButtonClicked() {

	RecipientInterface* f = new RecipientInterface(currentrec);
	this->hide();
	f->show();
	return true;
}
bool BloodRequest::okButtonClicked() {

	ui.pop_2->hide();
	return true;
}
bool BloodRequest::profileButtonClicked() {
	RecipientProfile* f = new RecipientProfile(currentrec);
	this->hide();
	f->show();
	return true;
}
bool BloodRequest::logoutButtonClicked() {
	FirstPage* f = new FirstPage();
	this->hide();
	f->show();
	return true;
}
bool BloodRequest::requestButtonClicked() {

	string hos;
	string bloodt;
	float quant;
	Donor d;
	unordered_map<string, pair<unordered_map<string, float>, float>> mapofblood;
	map<string, recipient> mapofrec;
	mapofblood = d.BloodFromFileToMap();
	mapofrec = currentrec.fromfiletomap();
	hos = ui.hos->text().toStdString();
	bloodt = currentrec.bloodType;
	quant = ui.quant->text().toFloat();

	if (currentrec.BloodRequest(mapofblood, mapofrec, bloodt, quant, hos) == 1) {
		ui.label_7->setStyleSheet("color:green");
	}
	else {
		ui.pop_2->show();
	}
	d.BloodFromMapToFile(mapofblood);
	currentrec.frommaptofile(mapofrec);
	return true;
}
BloodRequest::~BloodRequest()
{}
