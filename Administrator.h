#pragma once
#include<iostream>
#include<string >
#include"header.h"
using namespace std;
class Administrator : public A, public B
{
public:
	A* teacher;
	B* student;
	int no_of_teacher;
	int no_of_student;
	string ad_username;
	int ad_pass;
	Administrator();
	~Administrator();
	void AD_log_in();
	void addteacher();
	void save_teacher();
	void addstudent();
	void add_teacher_object();
	void load_teacher();
	void save_student();
	void add_student_object();
	void load_student();
	void edit_student();
	void edit_teacher();
	void view_all_teachers();
	void view_all_students();

};

