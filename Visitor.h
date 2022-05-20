#include <iostream>
#include <cstring>
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

class Visitor: public Person {
 
public:
   Visitor() {
   }
   Visitor(char pname[], char p_email[]): Person(pname,p_email) {
     
   }
   void display() {
      cout << "this is Visitor class"        
           << " derived class from Person" 
           << endl;
    }
    void print() {
     Person :: print() ; 
   }
};
