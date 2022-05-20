#include <iostream>
#include <cstring>
#include "Person.h"

using namespace std ;


class Employee : public Person {
 protected :
  string NIC ;
  string phoneNo ;

 public :
  Employee(char pname[] , string pemail , string pNIC , string pphoneNo) 
        : Person(pname , pemail){
    NIC = pNIC ;
    phoneNo = pphoneNo ;
 }

 void print(){
   Person :: print() ;
   cout << "NIC : " << NIC << endl ;
   cout << "Phone No : " << phoneNo << endl ;
 }
  
};