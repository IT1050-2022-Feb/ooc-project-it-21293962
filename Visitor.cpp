#include "Visitor.h"
int main() {
    Person p1;
    Visitor v1;
  
    p1.display();
    v1.display();
   
    v1.print();
    return 0;
}