#include "DonationValidation.h"
#include"qmessagebox.h"
#include"DonationRequest.h"
DonationValidation::DonationValidation(Donor & d,QWidget *parent)
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
    connect(ui.pushButton, &QPushButton::clicked, this, &DonationValidation::Buttonclicked);


}
bool DonationValidation::Buttonclicked() {
    
        if ( ui.c1->isChecked() || ui.c2->isChecked() || ui.c3->isChecked() || ui.c4->isChecked() || ui.c5->isChecked() )

        {

            QMessageBox::information(this, tr("Donation Validation Request "), tr("Sorry, it seems that you cannot donate due to your health condition, thank you for your interest, We hope you stay well."));


        }
        else
        {
            DonationRequest* d = new DonationRequest(currentdonor);
            this->hide();
            d->show();
        }
    
    return true;
}
DonationValidation::~DonationValidation()
{}
