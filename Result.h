#pragma once
#include <iostream>
#include "Certificate.h"
#define SIZE 2

class Result
{
private:
	Certificate* cft[SIZE];
	int marks;
	char grade;

public:
	Result(){};
	void addCertificate(Certificate* cft1, Certificate* cft2);
	void setMarks(int m);
	int getMarks();
	void displayGrade();
	~Result(){};
};
