#include "DisplayBlood.h"
#include "Donor.h"
#include"RecipientInterface.h"
#include<qdebug.h>
DisplayBlood::DisplayBlood(recipient &r,QWidget *parent)
	: QMainWindow(parent)
{
	Donor d;
	deque <pair<blood, string>> mapofb;
	mapofb=d.BloodFromFileToDque();
	currentrec.age = r.age;
	currentrec.name = r.name;
	currentrec.mail = r.mail;
	currentrec.id = r.id;
	currentrec.gender = r.gender;
	currentrec.password = r.password;
	currentrec.doctor = r.doctor;
	currentrec.bloodType = r.bloodType;
	currentrec.hospital = r.hospital;
	ui.setupUi(this);
	const int numLabels = mapofb.size();
	const int labelHeight = 20;
	const int labelSpacing = 5;
	int yPos = 200;

	for (int i = 0; i < numLabels; i++) {
		QLabel* labelb = new QLabel(QString::fromStdString(mapofb[i].first.bTybe), this);
		labelb->setStyleSheet("font-weight: bold;");
		qInfo() << mapofb[i].first.bTybe;
		labelb->setGeometry(100, yPos, 100, labelHeight);
		QLabel* labelq = new QLabel(QString::fromStdString(to_string(mapofb[i].first.quantity)), this);
		labelq->setStyleSheet("font-weight: bold;");
		qInfo() << mapofb[i].first.quantity;
		labelq->setGeometry(200, yPos, 100, labelHeight);
		QLabel* labelr = new QLabel(QString::fromStdString(mapofb[i].first.receivedDate), this);
		labelr->setStyleSheet("font-weight: bold;");
		qInfo() << mapofb[i].first.receivedDate;
		labelr->setGeometry(300, yPos, 100, labelHeight);
		QLabel* labelx = new QLabel(QString::fromStdString(mapofb[i].first.expiry), this);
		labelx->setStyleSheet("font-weight: bold;");
		qInfo() << mapofb[i].first.expiry;
		labelx->setGeometry(400, yPos, 100, labelHeight);

		yPos += 30 + labelSpacing;
	}
	connect(ui.back, &QPushButton::clicked, this, &DisplayBlood::backButtonClicked);
}
bool DisplayBlood::backButtonClicked() {
	RecipientInterface* f = new RecipientInterface(currentrec);
	this->hide();
	f->show();
	return true;
}
DisplayBlood::~DisplayBlood()
{}
