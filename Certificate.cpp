#include "Certificate.h"
#include <iostream>
#include <cstring>

using namespace std;

Certificate::Certificate()
{
	ctDate = 00 / 00 / 0000;
	passType = "Merit";
}

void Certificate::setpassType(string pt)
{
	passType = pt;
}

string Certificate::getpassType()
{
	return passType;
}

void Certificate::setctDate(string dt)
{
	ctDate = dt;
}

string Certificate::getctDate()
{
	return ctDate;
}

void Certificate::displayCertificateDetails()
{
	cout << "Date: " << ctDate << endl;
	cout << "Pass: " << passType << endl<<endl;
}

Certificate::~Certificate()
{

}
