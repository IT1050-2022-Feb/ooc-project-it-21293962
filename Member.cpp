#include<iostream>
#include "Member.h"
#include "Course.h"
#include "Result.h"

using namespace std;

int main() {
  Person p1;
  p1.display();
  
  Course *c = new Course( ); 
  c->displayDetails();
  cout <<"******************************" << endl;

  Result *r = new Result( ); 
  r->displayGrade();
  cout <<"******************************" << endl;   
  
  Member *m1 = new Member( ); 
  
  m1->display();
  m1->print();
  
  delete c; 
  delete r;
  delete m1;
  
  return 0;
}
