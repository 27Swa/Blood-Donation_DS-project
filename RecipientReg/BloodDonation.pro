QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BloodDonation
TEMPLATE = app

SOURCES += \
    main.cpp \
    blood.cpp \
    BloodRequest.cpp \
    DisplayBlood.cpp \
    DonationRequest.cpp \
    DonationValidation.cpp \
    Donor.cpp \
    DonorInterface.cpp \
    DonorLogIn.cpp \
    DonorProfile.cpp \
    DonorReg.cpp \
    DonorValidation.cpp \
    FirstPage.cpp \
    recipient.cpp \
    RecipientInterface.cpp \
    RecipientLogIn.cpp \
    RecipientProfile.cpp \
    RecipientReg.cpp

HEADERS += \
    blood.h \
    BloodRequest.h \
    DisplayBlood.h \
    DonationRequest.h \
    DonationValidation.h \
    Donor.h \
    DonorInterface.h \
    DonorLogin.h \
    DonorProfile.h \
    DonorReg.h \
    DonorValidation.h \
    FirstPage.h \
    recipient.h \
    RecipientInterface.h \
    RecipientLogIn.h \
    RecipientProfile.h \
    RecipientReg.h

FORMS += \
    BloodRequest.ui \
    DisplayBlood.ui \
    DonationRequest.ui \
    DonationValidation.ui \
    DonorInterface.ui \
    DonorLogin.ui \
    DonorProfile.ui \
    DonorReg.ui \
    DonorValidation.ui \
    FirstPage.ui \
    RecipientInterface.ui \
    RecipientLogIn.ui \
    RecipientProfile.ui \
    RecipientReg.ui

RESOURCES += \
    res.qrc \
    RecipientReg.qrc
