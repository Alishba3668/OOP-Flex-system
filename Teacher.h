#pragma once
#include<string>
#include<iostream>
#include"header.h"
#include"Administrator.h"
using namespace std;
class Teacher : public Administrator
{
public:
	void T_log_in();
	void Assign_marks();
	void Assign_grades();
	void Asssign_attendece();
	void Time_table();
};

