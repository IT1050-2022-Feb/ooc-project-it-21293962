#include "Result.h"
#include <iostream>
#define SIZE 2

using namespace std;

class Exam
{
private:
	Result *re[SIZE];
	string date;
	string examType;
	string cName;
	int noOfStudents;

public:
	Exam(){};
	void setDate(string d);
	string getDate();
	void setExamType(string t);
	string getExamType();
	void setcName(string n);
	string getcName();
	void setnoOfStudents(int s);
	int getonOfStudents();
	void displayExamDetails();
	~Exam(){};
};