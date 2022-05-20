#include "Employee.h"
#include "Certificate.h"
#include "Course.h"
#include "Member.h"
#include "Payment.h"

class SystemAdmin : public Employee{
	private:
		string aId;
		Certificate *certificate[10];
		
	public:
		SystemAdmin(string paId, char pname[], string pNic, string pEmail, string pPhoneNo): 
		Employee(pname, pEmail, pNic, pPhoneNo){
			aId = paId;
		}
		void addCourse(Course *pCourse);
		void removeCourse(Course *pCourse);
		void verifyDetails(Member *pMem);
		void monitorProgress(Payment *pPay);
		void issueCertificate(Certificate *pCer);
    void print(){
      Employee::print();
      cout << "Admin ID : " << aId << endl ; 
    }
		
};