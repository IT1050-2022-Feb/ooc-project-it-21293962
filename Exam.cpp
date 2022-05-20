#include "Exam.h"
#include <iostream>
#define SIZE 2

Exam::Exam()
{
	re[0] = new Result();
	re[1] = new Result();

	date = 00 / 00 / 0000;
	examType = "MCQ";
	cName = "Information Technology";
	noOfStudents = 00;
}
void Exam::setDate(string d)
{
	date = d;
}

string Exam::getDate()
{
	return date;
}

void Exam::setExamType(string t)
{
	examType = t;
}

string Exam::getExamType()
{
	return examType;
}

void Exam::setcName(string n)
{
	cName = n;
}

string Exam::getcName()
{
	return cName;
}

void Exam::setnoOfStudents(int s)
{
	noOfStudents = s;
}

int Exam::getonOfStudents()
{
	return noOfStudents;
}

void Exam::displayExamDetails()
{
	cout << "Date: " << date << endl;
	cout << "Exam Type: " << examType << endl;
	cout << "Course Name: " << cName << endl;
	cout << "No. of Students: " << examType << endl<<endl;
}

Exam::~Exam()
{
	for (int r = 0; r < SIZE; r++)
		delete re[r];
}