#include "Donor.h"
#include <map>
#include <qdebug>
#include <iostream>
#include <string>
#include <fstream>
#include "blood.h"
#include <unordered_map>
#include <utility>
Donor::Donor() {

}
void Donor::frommaptofile(map<string, Donor>& mp) {
	donatewritefile.open("Donor.txt");
	map<string, Donor>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++) {
		donatewritefile << (*it).first << "\n";
		donatewritefile << (*it).second.name << "\n";
		donatewritefile << (*it).second.id << "\n";
		donatewritefile << (*it).second.password << "\n";
		donatewritefile << (*it).second.age << "\n";
		donatewritefile << (*it).second.gender << "\n";
		donatewritefile << (*it).second.bloodType << "\n";
		donatewritefile << (*it).second.DateOflatestDonate << "\n";
		//donatewritefile << "\n";

	}
	donatewritefile.close();
}
map<string, Donor>  Donor::fromfiletomap() {
	donatereadfile.open("Donor.txt");
	string s;
	int i = 0;
	bool mailline = true, nameline = true, idline = true, passline = true, ageline = true, genderline = true, bloodline = true;
	bool dateline = true;
	string tempId;
	map<string, Donor> temp;
	while (donatereadfile.good())
	{
		//while loop that reads the file line by line using getline
		getline(donatereadfile, s, '\n');
		if (!dateline) {
			mailline = nameline = idline = passline = ageline = genderline = bloodline = dateline = true;
		}
		if (mailline) {
			if (s.empty()) {
				break;
			}
			tempId = s;
			temp[tempId].mail = tempId;
			mailline = false;
		}
		else if (nameline) {
			temp[tempId].name = s;
			nameline = false;
		}
		else if (idline) {
			temp[tempId].id = stoi(s);
			idline = false;
		}
		else if (passline) {
			temp[tempId].password = s;
			passline = false;
		}
		else if (ageline) {
			if (!s.empty())
				temp[tempId].age = stoi(s);
			ageline = false;
		}
		else if (genderline) {
			temp[tempId].gender = s;
			genderline = false;
		}
		else if (bloodline) {
			temp[tempId].bloodType = s;
			bloodline = false;
		}
		else if (dateline) {
			temp[tempId].DateOflatestDonate = s;
			dateline = false;
		}

	}
	donatereadfile.close();
	return temp;
}

bool Donor::login(map<string, Donor>& mp, string email, string pass) {


	if (mp.find(email) == mp.end())
	{
		return false;
	}
	map<string, Donor> ::iterator it = mp.find(email);

	//while (true) {
	if (pass == (*it).second.password) {
	
		mail = (*it).second.mail;
		name = (*it).second.name;
		age = (*it).second.age;
		id = (*it).second.id;
		bloodType = (*it).second.bloodType;
		DateOflatestDonate = (*it).second.DateOflatestDonate;
		password = (*it).second.password;
		gender = (*it).second.gender;
		qInfo() << name;
		return true;
	}
	else
	{
		return false;
	}
	//	}
}
bool Donor::Register(string maill, std::string passwordd)
{
	// validation for real mail 
	//id = DonorIdGenerate();
	if (maill.find('@') == false || maill.find(".com") == false || maill.find(".COM") == false ||passwordd.size()<8||passwordd.size()>12)
	{

		return false;
	}
	return true;
	/*validation for strong password

	while (password.size() < 8 && password.size() > 12)
	{
		cout << "password must use at least 8 characters and contain one upper case letter, one lower case latter and one numeric character and 12-character maximum. please try again";
	}*/


	/*for (int i = 0; i < gender.size(); i++)
	{
		gender[i] = tolower(gender[i]);

	}*/

	//validation for right gender 

	//while (gender != "female" || gender != "male") {
	//	cout << "please enter male or female ";
	//}

	//for (int i = 0; i < blood_type.size(); i++)
	//{
	//	blood_type[i] = toupper(blood_type[i]);

	//}

	//validation for real blood_type 

	/*while (blood_type != "AB+" || blood_type != "AB-" || blood_type != "B+" || blood_type != "B-" || blood_type != "A+" || blood_type != "A-" || blood_type != "O+" || blood_type != "O-")
	{
		cout << "invalid blood type . please enter A or B or C or AB";

	}*/


}
void Donor::Delete(map<string, Donor>& m,string email)
{
	
		m.erase(email);
		
}

string Donor::GetCurrentDate()
{
	struct tm newtime;
	time_t now = time(0); //seconds from 1 january 1970 midnight
	localtime_s(&newtime, &now); //converts seconds into struct of multiple variables
	int year = 1900 + newtime.tm_year; // this is because tm_year has the years since 1900
	int month = 1 + newtime.tm_mon; // this is because tm-mon has the months indexed form 0-11
	int day = newtime.tm_mday;
	string date = to_string(day) + "-" + to_string(month) + "-" + to_string(year);
	return date;
}
// date 1 is current date , date 2 is latest donation date 
int Donor::DaysDiff(string date1, string date2) {
	string day1, day2, mon1, mon2, year1, year2;
	bool days = true, month = false, years = false;
	for (int i = 0; i < date1.size(); i++) {
		if (date1[i] == '-' && days) {
			days = false;
			month = true;
			continue;
		}
		if (days) {
			day1 += date1[i];
		}
		if (date1[i] == '-' && month) {
			month = false;
			years = true;
			continue;
		}
		if (month) {
			mon1 += date1[i];
		}
		if (years) {
			year1 += date1[i];
		}
	}
	days = true, month = false, years = false;
	for (int i = 0; i < date2.size(); i++) {
		if (date2[i] == '-' && days) {
			days = false;
			month = true;
			continue;
		}
		if (days) {
			day2 += date2[i];
		}
		if (date2[i] == '-' && month) {
			month = false;
			years = true;
			continue;
		}
		if (month) {
			mon2 += date2[i];
		}
		if (years) {
			year2 += date2[i];
		}
	}
	int nday1 = stoi(day1), nmon1 = stoi(mon1), nyear1 = stoi(year1), nday2 = stoi(day2), nmon2 = stoi(mon2), nyear2 = stoi(year2);
	// convert everthing into days then subtract
	long long n1 = (long long)nyear1 * 365 + nday1;
	long long n2 = (long long)nyear2 * 365 + nday2;
	// now we need to convert months into days
	// every month has different number of days
	int months[] = { 31, 28, 31, 30, 31, 30,
	   31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < nmon1 - 1; i++) {
		n1 += months[i];
	}
	for (int i = 0; i < nmon2 - 1; i++) {
		n2 += months[i];
	}
	return abs(n1 - n2);
}
bool Donor::DonationReq(deque <pair<blood, string>>& bque, unordered_map<string, pair<unordered_map<string, float>, float>>& mp, map<string, Donor>& dmap, float quant, string date, string exdate) {
	DateOflatestDonate = date; // date is the date of today --> change it in GUI
	dmap[mail].DateOflatestDonate = date;
	blood b;
	b.bTybe = bloodType;
	b.quantity = quant;
	b.receivedDate = date; //change it to the date of today
	b.expiry = exdate;
	bque.push_back({ b,mail });
	mp[bloodType].second += quant;
	unordered_map<string, float>::iterator it;
	it = mp[bloodType].first.find(exdate);
	if (it != mp[bloodType].first.end()) {
		(*it).second += quant;
	}
	else {
		mp[bloodType].first.insert({ exdate, quant });
	}
	return true;

}
void Donor::BloodFromDqueToFile(deque <pair<blood, string>>& bdque) {
	donatewritefile.open("BloodDonation.txt");
	deque <pair<blood, string>>::iterator it;
	for (it = bdque.begin(); it != bdque.end(); it++) {
		donatewritefile << (*it).first.bTybe << "\n"; //BLOOD TYPE
		donatewritefile << (*it).second << "\n"; //MAIL
		donatewritefile << (*it).first.quantity << "\n"; //QUANTITY
		donatewritefile << (*it).first.expiry << "\n";
		donatewritefile << (*it).first.receivedDate << "\n";
		//donatewritefile << "\n";

	}
	donatewritefile.close();
}

deque <pair<blood, string>> Donor::BloodFromFileToDque() {
	donatereadfile.open("BloodDonation.txt");
	string s;
	bool mailline = true, btypeline = true, quantline = true, expiryline = true, recieveline = true;
	string tempId;
	deque <pair<blood, string>>  temp;
	int i = 0;
	blood b;
	string fEmail;
	temp.clear();
	while (donatereadfile.good())
	{
		//while loop that reads the file line by line using getline
		getline(donatereadfile, s, '\n');
		if (!recieveline) {
			temp.push_back({ b,fEmail });
			mailline = btypeline = quantline = expiryline = recieveline = true;
		}
		if (btypeline) {
			if (s.empty()) {
				break;
			}
			b.bTybe = s;
			btypeline = false;
		}
		else if (mailline) {
			fEmail = s;
			mailline = false;
		}
		else if (quantline) {
			if (!s.empty())
				b.quantity = stof(s);
			quantline = false;
		}
		else if (expiryline) {
			b.expiry = s;
			expiryline = false;
		}
		else if (recieveline) {
			b.receivedDate = s;
			recieveline = false;
		}
	}
	donatereadfile.close();
	return temp;

}
void Donor::BloodFromMapToFile(unordered_map<string, pair<unordered_map<string, float>, float>>& mp) {
	donatewritefile.open("BloodQuantity.txt");
	unordered_map<string, pair<unordered_map<string, float>, float>>::iterator it;
	unordered_map<string, float>::iterator it2;
	for (it = mp.begin(); it != mp.end(); it++) {
		donatewritefile << (*it).first << "\n"; //BLOOD TYPE
		donatewritefile << (*it).second.second << "\n"; //all the quantity of this blood type
		for (it2 = mp[(*it).first].first.begin(); it2 != mp[(*it).first].first.end(); it2++) {
			donatewritefile << (*it2).first << "\n"; //expiry date
			donatewritefile << (*it2).second << "\n"; //quantity
		}
		donatewritefile << "x" << "\n";
	}
	donatewritefile.close();
}
unordered_map<string, pair<unordered_map<string, float>, float>> Donor::BloodFromFileToMap() {
	donatereadfile.open("BloodQuantity.txt");
	string s;
	bool  btypeline = true, quantline = true, exdateline = true, bqaunt = true;
	string tempId;
	unordered_map<string, pair<unordered_map<string, float>, float>>  temp;
	string expiry;
	float q;
	while (donatereadfile.good())
	{
		//while loop that reads the file line by line using getline
		getline(donatereadfile, s, '\n');
		if (s == "x") {
			temp[tempId].first.insert({ expiry,q });
			btypeline = quantline = exdateline = bqaunt = true;
			continue;
		}
		if (btypeline) {
			if (s.empty()) {
				break;
			}
			tempId = s;
			btypeline = false;
		}
		else if (quantline) {
			if (!s.empty())
				temp[tempId].second = stof(s);
			quantline = false;
		}
		else {

			if (!bqaunt) {
				temp[tempId].first.insert({ expiry,q });
				exdateline = bqaunt = true;
			}
			if (exdateline) {
				expiry = s;
				exdateline = false;
			}
			else if (bqaunt) {
				if (!s.empty())
					q = stof(s);
				bqaunt = false;
			}
		}
	}
	donatereadfile.close();
	return temp;
}
//string Donor::AddDays(string date) {
//	string day1, mon1, year1;
//	bool days = true, month = false, years = false;
//	for (int i = 0; i < date.size(); i++) {
//		if (date[i] == '-' && days) {
//			days = false;
//			month = true;
//			continue;
//		}
//		if (days) {
//			day1 += date[i];
//		}
//		if (date[i] == '-' && month) {
//			month = false;
//			years = true;
//			continue;
//		}
//		if (month) {
//			mon1 += date[i];
//		}
//		if (years) {
//			year1 += date[i];
//		}
//	}
//	int nday1 = stoi(day1), nmon1 = stoi(mon1), nyear1 = stoi(year1);
//	vector<int> v = { 0, 31, 28, 31, 30, 31, 30,
//					  31, 31, 30, 31, 30, 31 };
//	int day2 = 0, month2 = nmon1, year2 = nyear1, m = nmon1;
//	day2 = nday1 + 42;
//	while ((day2 - v[m++]) > 0) {
//		day2 -= v[m - 1];
//		month2++;
//		if (month2 > 12) {
//			month2 = 1;
//			year2++;
//		}
//		if (m > 12) {
//			m = 1;
//		}
//	}
//	string s = to_string(day2) + '-' + to_string(month2) + "-" + to_string(year2);
//	return s;
//}
void Donor::removeExpiry2(unordered_map<string, pair<unordered_map<string, float>, float>>& mp, deque <pair<blood, string>>& bque,string currentdate) {
	
	unordered_map<string, pair<unordered_map<string, float>, float>>::iterator it;
	unordered_map<string, float>::iterator it3;
	for (it = mp.begin(); it != mp.end(); it++) {
		it3 = (*it).second.first.find(currentdate);
		if (it3 != (*it).second.first.end()) {
			(*it).second.second -= (*it3).second;
			(*it).second.first.erase(it3);
		}
	}
	while (!bque.empty()) {
		if (bque.front().first.expiry == currentdate) {
			bque.pop_front();
		}
		else {
			break;
		}
	}
}
void Donor::update(map<string, Donor>& mp)
{
	string key;
	string newValue;

	cout << "Enter the key of the value to edit : ";
	cin >> key;


	while (true)
	{

		if (key == "name")
		{
			cout << "Enter the new value: ";
			cin >> newValue;
			mp[mail].name = newValue;
			name = newValue;
			cout << "Your name is updated.\n";

		}
		else if (key == "mail")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].mail = newValue;
			mail = newValue;
			cout << "Your email is updated.\n";

		}

		else if (key == "password")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].password = newValue;
			password = newValue;
			cout << "Your password is updated.\n";

		}

		else if (key == "gender")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].gender = newValue;
			gender = newValue;
			cout << "Your gender is updated.\n";

		}

		else if (key == "bloodType")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].bloodType = newValue;
			bloodType = newValue;
			cout << "Your Blood Type is updated.\n";

		}
		else if (key == "Date Of latest Donate")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].DateOflatestDonate = newValue;
			DateOflatestDonate = newValue;
			cout << "Your Doctor Type is updated.\n";

		}
		else if (key == "age")
		{
			cout << "Enter the new value: ";
			cin >> newValue;
			mp[mail].age = stoi(newValue);
			age = stoi(newValue);
			cout << "Your hospital Type is updated.\n";

		}
		else if (key == "id")
		{
			cout << "Enter the new value: ";
			cin >> newValue;
			mp[mail].id = stoi(newValue);
			id = stoi(newValue);
			cout << "Your hospital Type is updated.\n";

		}
		else

			cout << "Please enter a valied field." << endl;
		break;
	}
}