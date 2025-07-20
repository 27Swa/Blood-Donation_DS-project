#include "DonationRequest.h"
#include"DonorInterface.h"
#include"DonorProfile.h"
#include"FirstPage.h"
#include<QDate>
DonationRequest::DonationRequest(Donor& user,QWidget *parent)
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
		ui.accountM->hide();
		ui.accountF->show();
	}
	else
	{
		ui.accountM->show();
		ui.accountF->hide();
	}
	ui.user->setText(QString::fromStdString(d.name));
	connect(ui.back, &QPushButton::clicked, this, &DonationRequest::backButtonClicked);
	connect(ui.submit, &QPushButton::clicked, this, &DonationRequest::submitButtonClicked);
	connect(ui.logout, &QPushButton::clicked, this, &DonationRequest::logoutButtonClicked);
	connect(ui.accountM, &QPushButton::clicked, this, &DonationRequest::profileButtonClicked);
	connect(ui.accountF, &QPushButton::clicked, this, &DonationRequest::profileButtonClicked);
	
}
bool DonationRequest::backButtonClicked() {

	DonorInterface* f = new DonorInterface(d);
	this->hide();
	f->show();
	return true;
}
bool DonationRequest::profileButtonClicked() {

	DonorProfile* f = new DonorProfile(d);
	this->hide();
	f->show();
	return true;
}
bool DonationRequest::logoutButtonClicked() {

	FirstPage* f = new FirstPage;
	this->hide();
	f->show();
	return true;
}
bool DonationRequest::submitButtonClicked() {
	string expiry;
	float quant;
	string datenow;
	deque <pair<blood, string>> mapofbloodandmail;
	mapofbloodandmail = d.BloodFromFileToDque();
	unordered_map<string, pair<unordered_map<string, float>, float>> mapofbloodandquant;
	mapofbloodandquant = d.BloodFromFileToMap();
	map<string, Donor> mapofdonors;
	mapofdonors = d.fromfiletomap();
	qInfo() << ui.doubleSpinBox->text();
	expiry = (QDate::currentDate().addDays(35).toString("d/M/yyyy")).toStdString();
	datenow = (QDate::currentDate().toString("d/M/yyyy")).toStdString();
	quant = ui.doubleSpinBox->text().toFloat();
	d.DonationReq(mapofbloodandmail, mapofbloodandquant, mapofdonors, quant, datenow, expiry);
	d.frommaptofile(mapofdonors);
	d.BloodFromDqueToFile(mapofbloodandmail);
	d.BloodFromMapToFile(mapofbloodandquant);
	ui.label_9->setStyleSheet("color:green");
	return true;
}
DonationRequest::~DonationRequest()
{}
