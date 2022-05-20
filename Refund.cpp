#include "Refund.h"

int main() {
  char ch ;
  Payment *P1 = new Payment("3322115566" , "124523" , "123401" , 200000.00 , "Via credit card") ;
  Payment *P2 = new Payment("3422125566" , "224523" , "123402" , 185000.00 , "Via credit card") ;
  Payment *P3 = new Payment("4452125566" , "324523" , "123403" , 150000.00 , "Via Paypal") ;
  Payment *P4 = new Payment("4852125566" , "414523" , "123404" , 237500.00 , "Via Payhere") ;
  Payment *P5 = new Payment("4862125586" , "514523" , "123405" , 250000.00 , "Via credit card") ;

  Refund *R1 = new Refund("4452125566" , "324523" , "011112" , "Regitered for a wrong course");
  Refund *R2 = new Refund("4852125566" , "414523" , "011123" , "Recieved a scholarship for higher studies");

  R1->addRefund(P3) ;
  R2->addRefund(P4) ;

  R1->display() ;
  R2->display() ;
  
}