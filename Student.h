#pragma once
#include<string>
#include<iostream>
#include"Administrator.h"
#include"header.h"
#include"Teacher.h"
using namespace std;
class Student : virtual public Teacher
{
public:
	string u;
	int p;
	void ST_log_in();
	void  View_Attendece();
	void View_Marks();
	void View_grades();
	void Fee_status();
};