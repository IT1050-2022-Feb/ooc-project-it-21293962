#include <iostream>
#include <cstring>
using namespace std ;

class Person {
 protected :
  char name[20] ;
  string email ;

 public :
  Person(char pname[] , string pemail){
    strcpy(name , pname);
    email = pemail ;
  }

  virtual void print(){
    cout << "Name : " << name << endl ;
    cout << "Email : " << email << endl ;
  }
};