#include <iostream>
#include <cstring>
#include "Payment.h"
using namespace std;



class Payment{
	protected:
		int oderId;
		string number;
		string pType;
		double amount;
		string date;
		Member *member;
		
	public:
		Payment(int sOderId, string spType, double aAmount, string pNumber, string pDate){
			oderId =sOderId;
			pType = spType;
			amount = aAmount;
			number = pNumber;
			date = pDate;
		}

		void addMemberDetails(Member *pMember);
		double calcTotalAmount();
		void printSlip();
		void authorize();
		void displayDetails();
		float getAmount()
  		{
  			return amount ;
  		}
};

// Credit class
class Credit : public Payment{
	private:
		string expire;
	
	public:
		Credit(int sOderId, string spType, double aAmount, string pNumber, string pDate, string pExpire): Payment(sOderId, spType, aAmount, pNumber, pDate){
			expire = pExpire;
		}
};

// Paypal class
class Paypal : public Payment{
	private:
		string email;
		
	public:
		Paypal(int sOderId, string spType, double aAmount, string pNumber, string pDate, string pEmail): Payment(sOderId, spType, aAmount, pNumber, pDate){
			email = pEmail;
		}
};

// Payhere class
class Payhere : public Payment{
	private:
		string email;
		
	public:
		Payhere(int sOderId, string spType, double aAmount, string pNumber, string pDate, string pEmail): Payment(sOderId, spType, aAmount, pNumber, pDate){
			email = pEmail;
		}
};
