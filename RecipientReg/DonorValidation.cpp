#include "DonorValidation.h"
#include "DonorLogIn.h"
#include <QMessageBox>
#include "DonorReg.h"
#include <QDate>
#include <QDebug>
DonorValidation::DonorValidation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &DonorValidation::ButtonClicked);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &DonorValidation::LogInButtonclicked);

}
bool DonorValidation::ButtonClicked() {
    if (ui.ageTB->text().toStdString() == "")
        ui.agealertmsg->setStyleSheet("color:red");
    else {
        ui.agealertmsg->setStyleSheet("color:rgb(240, 240, 240)");

        if ((ui.dateolatest->date().daysTo(QDate::currentDate()) < 90) || (ui.ageTB->text().toInt() < 17) || (ui.ageTB->text().toInt() > 60) || ui.checkBox->isChecked() || ui.checkBox_2->isChecked() || ui.checkBox_3->isChecked() || ui.checkBox_4->isChecked() || ui.checkBox_5->isChecked() || ui.checkBox_6->isChecked() || ui.radioButton->isChecked())

        {

            QMessageBox::information(this, tr("Donor's Validation Request "), tr("Sorry, it seems that you cannot donate due to your health condition, thank you for your interest, We hope you stay well."));
            

        }
        else
        {
            DonorReg* d = new DonorReg();
            this->hide();
            d->show();
        }
    }
    return true;
}
bool DonorValidation::LogInButtonclicked() {
    DonorLogIn* l = new DonorLogIn();
    this->hide();
    l->show();
    return true;

}
DonorValidation::~DonorValidation()
{}
