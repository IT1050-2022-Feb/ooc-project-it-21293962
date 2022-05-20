#include "Certificate.h"
#include <iostream>

using namespace std;

class Certificate
{
private:
	string passType;
	string ctDate;

public:
	Certificate(){};
	void setpassType(string pt);
	string getpassType();
	void setctDate(string dt);
	string getctDate();
	void displayCertificateDetails();
	~Certificate(){};
};

