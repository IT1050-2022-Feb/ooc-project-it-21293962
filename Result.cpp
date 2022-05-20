#include "Result.h"
#include <iostream>

using namespace std;


Result::Result()
{
	marks = 0;
	grade = 0;
}
void Result::addCertificate(Certificate* cft1, Certificate* cft2)
{
	cft[0] = cft1;
	cft[1] = cft2;
}

void Result::setMarks(int m)
{
	marks = m;
}

int Result::getMarks()
{
	return marks;
}

void Result::displayGrade()
{
	cout << "Marks = " << marks << endl;
	cout << "Grade = " << grade << endl;
}

Result::~Result()
{

}


