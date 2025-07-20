#include "RecipientInterface.h"
#include "FirstPage.h"
#include "BloodRequest.h"
#include "DonationRequest.h"
#include "RecipientLogIn.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    recipient d;
    d.age = 10;
    d.bloodType = "A+" ;
   // d.DateOflatestDonate = "10/2/2020";
    d.gender = "female";
    d.id = 1234;
    d.mail="hfhfh@ddd";
    d.name = "martina";
    d.password = "tinaaa";
    d.hospital="mos";
    d.doctor = "hhhh";
FirstPage w;
     w.show();
 
    return a.exec();
}
