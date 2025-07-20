#include "RecipientInterface.h"
#include <QMessageBox>
#include "FirstPage.h"
#include"RecipientProfile.h"
#include"BloodRequest.h"
#include"DisplayBlood.h"
#include "Donor.h"
#include<qstring.h>
#include<Qlabel.h>
#include<qdebug.h>
#include <iostream>
#include <unordered_map>
#include <vector>
#include<map>
#include<QDate>
using namespace std;

unordered_map<string, vector<string>> bloodmatching{
	{"A+", {"A+", "A-", "O+", "O-"}},
	{"A-", {"A-", "O-"}},
	{"B+", {"B+", "B-", "O+", "O-"}},
	{"B-", {"B-", "O-"}},
	{"AB+", {"A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"}},
	{"AB-", {"A-", "B-", "AB-", "O-"}},
	{"O+", {"O+", "O-"}},
	{"O-", {"O-"}}
};

vector<string> getbloodmatching(const string& recipientBloodType) {
	auto it = bloodmatching.find(recipientBloodType);
	if (it != bloodmatching.end()) {
		return it->second;
	}

}

RecipientInterface::RecipientInterface(recipient& r,QWidget *parent)
	: QMainWindow(parent)
{

	currentrec.age = r.age;
	currentrec.name = r.name;
	currentrec.mail = r.mail;
	currentrec.id = r.id;
	currentrec.gender = r.gender;
	currentrec.password = r.password;
	currentrec.doctor = r.doctor;
	currentrec.bloodType = r.bloodType;
	currentrec.hospital = r.hospital;
	vector<string> test = getbloodmatching(currentrec.bloodType);
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
	
	const int numLabels = test.size();
	const int labelHeight = 20;
	const int labelSpacing = 5;
	int xPos = 100;

	for (int i = 0; i < numLabels; i++) {
		QLabel* label = new QLabel(QString::fromStdString(test[i]), this);
		//label->setStyleSheet("font-weight: bold;");
		label->setGeometry(xPos, 310, 25, labelHeight);
		xPos += 25 + labelSpacing;
	}
	
	
	ui.pop->hide();
	ui.pop_2->hide();
	connect(ui.accountM, &QPushButton::clicked, this, &RecipientInterface::profileButtonClicked);
	connect(ui.accountF, &QPushButton::clicked, this, &RecipientInterface::profileButtonClicked);
	connect(ui.logout, &QPushButton::clicked, this, &RecipientInterface::logoutButtonClicked);
	connect(ui.pushButton, &QPushButton::clicked, this, &RecipientInterface::RequestBButtonClicked);
	connect(ui.pushButton_3, &QPushButton::clicked, this, &RecipientInterface::RequestButtonClicked);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &RecipientInterface::displayButtonClicked);
	connect(ui.pushButton_4, &QPushButton::clicked, this, &RecipientInterface::okButtonClicked);
	ui.user->setText(QString::fromStdString(currentrec.name));
	qInfo() << currentrec.gender;
}
bool RecipientInterface::profileButtonClicked() {
	RecipientProfile* f = new RecipientProfile(currentrec);
	this->hide();
	f->show();
	return true;
}
bool RecipientInterface::logoutButtonClicked() {
	FirstPage* f = new FirstPage();
	this->hide();
	f->show();
	return true;
}
bool RecipientInterface::RequestButtonClicked() {
	BloodRequest* f = new BloodRequest(currentrec);
	this->hide();
	f->show();
	return true;
}
bool RecipientInterface::RequestBButtonClicked() {
	Donor d;
	unordered_map<string, pair<unordered_map<string, float>, float>> mapofbl;
	deque <pair<blood, string>> deqofb;
	deqofb = d.BloodFromFileToDque();
	mapofbl = d.BloodFromFileToMap();
	//qInfo() << currentrec.Search(mapofbl, currentrec.bloodType);
	d.removeExpiry2(mapofbl, deqofb, (QDate::currentDate().toString("d/M/yyyy")).toStdString());
	if (currentrec.Search(mapofbl, currentrec.bloodType) == true) {
		
		ui.pop->show();
		
	}
	else {
		ui.pop_2->show();
		
	}
	d.BloodFromMapToFile(mapofbl);
	d.BloodFromDqueToFile(deqofb);
	return true;
}
bool RecipientInterface::okButtonClicked() {
	ui.pop_2->hide();
	return true;
}
bool RecipientInterface::displayButtonClicked() {
	DisplayBlood* f = new DisplayBlood(currentrec);
	this->hide();
	f->show();
	return true;
}

RecipientInterface::~RecipientInterface()
{}
