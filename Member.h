#include <iostream> 
#include <cstring>

#include "Member.h"

using namespace std;

class Person {
protected : 
  char name[20]; 
  char email[20]; 
public:
  Person() {
  }
  Person(char pname[], char p_email[]){
    strcpy(name, pname);
    strcpy(email, p_email);
     
   }
  void display() {
    cout << "this is Person class" << endl;
  }
  virtual void print(){
    cout << "Name : " << name << endl ;
    cout << "Email : " << email << endl ;
  }
};


class Member : public Person {
protected : 
  char StudentID[10];
  char DOB[10];
  int Age;
  char Address[50];
  char M_NIC[15];
  char Gender[10];
  char PhoneNo[10];
  Course *C1;
  Result *R1;
  Payment *payment;
 
public:
   Member();
   Member(char pname[] , char p_email[] ,char pSID[], char pDOB[], int pAge, char pAddress[], char pNIC[] , char pGender[] , char pPhnNo[], Course *c , Result *r): Person(pname,p_email) {

     strcpy(StudentID, pSID);
     strcpy(DOB, pDOB);
     Age = pAge;
     strcpy(Address, pAddress);
     strcpy(M_NIC, pNIC);
     strcpy(Gender, pGender);
     strcpy(PhoneNo, pPhnNo);
     
     C1 = c;
     R1 = r;
     
     
   } 
void display() {
      cout << "this is Member class"        
           << " derived class from Person" 
           << endl;
    }
    void print() {
     Person :: print() ;
     cout << "SID:"<< StudentID << endl<<"DOB:"<< DOB<< endl<<"Age:"<< Age<< endl<<"Address:"<< Address<< endl<<"NIC:"<< NIC<< endl<<"Gender:"<< Gender << endl<< "Phone Number:"<< PhoneNo<< endl;
      payment->displayDetails();
     
   }
void addPaymentDetails(Payment *pPayment){
}
};