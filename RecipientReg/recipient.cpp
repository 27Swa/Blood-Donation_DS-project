#include "recipient.h"
#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>
#include <deque>

using namespace std;

recipient::recipient() {}

map<string, recipient> recipient::fromfiletomap() {
    ifstream recreadfile("recicient.txt");
    string s;
    map<string, recipient> temp;
    string tempId;
    int fieldIndex = 0;

    while (getline(recreadfile, s)) {
        if (s.empty()) continue;

        switch (fieldIndex % 9) {
        case 0:
            tempId = s;
            temp[tempId].mail = s;
            break;
        case 1:
            temp[tempId].name = s;
            break;
        case 2:
            temp[tempId].id = stoi(s);
            break;
        case 3:
            temp[tempId].password = s;
            break;
        case 4:
            temp[tempId].age = stoi(s);
            break;
        case 5:
            temp[tempId].gender = s;
            break;
        case 6:
            temp[tempId].bloodType = s;
            break;
        case 7:
            temp[tempId].hospital = s;
            break;
        case 8:
            temp[tempId].doctor = s;
            break;
        }
        fieldIndex++;
    }

    return temp;
}

void recipient::frommaptofile(map<string, recipient>& mp) {
    ofstream recwritefile("recicient.txt");
    for (const auto& [key, val] : mp) {
        recwritefile << val.mail << "\n";
        recwritefile << val.name << "\n";
        recwritefile << val.id << "\n";
        recwritefile << val.password << "\n";
        recwritefile << val.age << "\n";
        recwritefile << val.gender << "\n";
        recwritefile << val.bloodType << "\n";
        recwritefile << val.hospital << "\n";
        recwritefile << val.doctor << "\n";
    }
}

bool recipient::Register(string maill, string passwordd) {
    if (maill.find('@') == string::npos || (maill.find(".com") == string::npos && maill.find(".COM") == string::npos) || passwordd.size() < 8 || passwordd.size() > 12) {
        return false;
    }
    return true;
}

bool recipient::login(map<string, recipient>& mp, string email, string pass) {
    if (mp.find(email) == mp.end()) {
        return false;
    }

    auto& user = mp[email];
    if (pass == user.password) {
        mail = user.mail;
        name = user.name;
        age = user.age;
        doctor = user.doctor;
        id = user.id;
        bloodType = user.bloodType;
        hospital = user.hospital;
        password = user.password;
        gender = user.gender;
        return true;
    }
    return false;
}

bool recipient::Search(unordered_map<string, pair<unordered_map<string, float>, float>>& b, string recipientBloodType) {
    return b.find(recipientBloodType) != b.end() && b[recipientBloodType].second > 0.0;
}

void recipient::Delete(map<string, recipient>& mp, string email) {
    mp.erase(email);
}

bool recipient::BloodRequest(unordered_map<string, pair<unordered_map<string, float>, float>>& bmp, map<string, recipient>& mp, string reqBtype, float quant, string hos) {
    mp[mail].hospital = hos;
    hospital = hos;

    if (bmp[reqBtype].second >= quant) {
        bmp[reqBtype].second -= quant;

        auto& donors = bmp[reqBtype].first;
        for (auto it = donors.begin(); it != donors.end();) {
            if (quant < it->second) {
                it->second -= quant;
                break;
            } else if (quant == it->second) {
                it = donors.erase(it);
                break;
            } else {
                quant -= it->second;
                it = donors.erase(it);
            }
        }
        return true;
    }

    return false;
}

void recipient::update(map<string, recipient>& mp) {
    string key, newValue;
    cout << "Enter the key of the value to edit : ";
    cin >> key;

    if (key == "name") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].name = name = newValue;
    } else if (key == "mail") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].mail = mail = newValue;
    } else if (key == "password") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].password = password = newValue;
    } else if (key == "gender") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].gender = gender = newValue;
    } else if (key == "bloodType") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].bloodType = bloodType = newValue;
    } else if (key == "doctor") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].doctor = doctor = newValue;
    } else if (key == "hospital") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].hospital = hospital = newValue;
    } else if (key == "age") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].age = age = stoi(newValue);
    } else if (key == "id") {
        cout << "Enter the new value: ";
        cin >> newValue;
        mp[mail].id = id = stoi(newValue);
    } else {
        cout << "Please enter a valid field.\n";
    }
}

void recipient::display(deque <pair<blood, string>>& bque) {
    for (const auto& item : bque) {
        cout << item.first.bTybe << "\n";
        cout << item.first.quantity << "\n";
        cout << item.first.receivedDate << "\n";
        cout << item.first.expiry << "\n";
    }
}
