#include <iostream>
#include <cstring>
#include "Course.h"

using namespace std;

// Course class
class Course{
	private:
		string cId;
		string cName;
		string c_description;
		double c_amount;
		Feedback *feedback[10];
		
	public:
		Course(){};
		Course(Feedback *feed){
			feedback[0] = feed;
		}
		void setDetails(string e_cId, string e_cName, string e_c_description, double e_c_amount);
};
