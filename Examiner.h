#include <iostream>
#include <cstring>
#include "Employee.h";

using namespace std ;



class Examiner : public Employee {
 protected :
  string EID ;
  string bday ;
  int age ;
  string qualification ;

 public :

  Examiner(string pEID , char pname[], string pNIC , string pemail , string pbday , string pphoneNo , int page , string pqualification ) : Employee(pname ,pemail , pNIC ,  pphoneNo) {
    EID = pEID ;
    bday = pbday ;
    age = page ;
    qualification = pqualification ;
  }

  void print(){
    Employee :: print();

    cout << "Examiner ID : " << EID << endl ;
    cout << "Birth Date : " << bday << endl ;
    cout << "Age : " << age << endl ;
    cout << "Qualification : " << qualification << endl ;
  }
};