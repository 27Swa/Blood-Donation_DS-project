#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stack>
#include <map>
#include <unordered_map>
//#include"Donor.h"
#include"Blood.h"
using namespace std;

class recipient
{
public:

	int id;
	string name;
	string mail;
	string password;
	string pw2; //to confirm the password in register
	int age;
	string gender;
	string bloodType;
	string hospital;
	string doctor;

	int choice2 = 0;
	int choice3 = 0;
	ofstream recwritefile; //output "write on files"
	ifstream recreadfile; //input "read from files"


	recipient();
	void frommaptofile(map<string, recipient>& mp);
	map<string, recipient>  fromfiletomap();
	bool login(map<string, recipient>& mp,string email,string pass);
	bool Register(string maill, std::string passwordd);
	//void  Search(map<string, recipient>& mp, map<string, Donor>& m);
	bool Search(unordered_map<string, pair<unordered_map<string, float>, float>>& bmp, string recipientBloodType);
	void Delete(map<string, recipient>& mp,string email);
	void display(deque <pair<blood, string>>& bque);
	bool BloodRequest(unordered_map<string, pair<unordered_map<string, float>, float>>& bmp, map<string, recipient>& mp, string reqBtype, float quant, string hos);
	void update(map<string, recipient>& mp );

};

