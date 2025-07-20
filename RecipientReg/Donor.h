#pragma once
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stack>
#include <map>
#include <unordered_map>
#include "blood.h"
using namespace std;

class Donor
{
public:
	int id ;
	string name;
	string mail;
	string password;
	//string pw2; //to confirm the password in register
	int age;
	string gender;
	string bloodType;

	string DateOflatestDonate;

	ofstream donatewritefile; //output "write on files"
	ifstream donatereadfile; //input "read from files"
	Donor();
	void frommaptofile(map<string, Donor>& mp);
	map<string, Donor> fromfiletomap();
	bool login(map<string, Donor>& mp, string email, string pass);
	void Delete(map<string, Donor>& mp,string email);
	bool Register(string mail, std::string password);
	string GetCurrentDate();
	int DaysDiff(string, string);
	bool DonationReq(deque <pair<blood, string>>& bque, unordered_map<string, pair<unordered_map<string, float>, float>>& mp, map<string, Donor>& dmap, float quant, string date, string exdate);
	void BloodFromDqueToFile(deque <pair<blood, string>>& bdque);
	deque <pair<blood, string>> BloodFromFileToDque();
	void BloodFromMapToFile(unordered_map<string, pair<unordered_map<string, float>, float>>& mp);
	unordered_map<string, pair<unordered_map<string, float>, float>> BloodFromFileToMap();
	void removeExpiry2(unordered_map<string, pair<unordered_map<string, float>, float>>& mp, deque <pair<blood, string>>& bque,string currentdate);
	void update(map<string, Donor>& mp);
};


