#pragma once
#include<iostream>
#include<string>
using namespace std;
class  A
{
public:
	string First_Name;
	string Last_Name;
	string Department;
	int  Password;
	string Username;
	string Registeration_Date;							//////    TEACHER		///////
	string Gender;
	double Contact_No;
	string Qualification;
	string Address;
	double salary;

};
class B
{
public:
	B() {}
	string first_name;
	string last_name;
	string deprt;
	string reg_date;
	string gender;
	int    contact_no;								///////		STUDENT		///////
	string Blood_group;
	string address;
	string Fee_status;
	string qualifics;
	int    pass;
	string us_name;

	double MARKS[10];
	string GRDES[10];
	char  ATTENDENCE[10];
	int m = 0;
	int a = 0;
	int g = 0;
};
