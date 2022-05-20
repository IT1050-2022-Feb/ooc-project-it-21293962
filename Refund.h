#include <iostream>
#include <cstring>

using namespace std ;

class Payment 
{
  private :
   string orderID ;
   string pType ;
   string SID ;
   string CID ;
   double amount ;
   Order *order[5] ; 

  public :
    Payment () {}
    Payment(string pSID , string pCID , string porderID , float PAmount , string pPType ) {
     SID = pSID ;
     CID = pCID ;
     orderID = porderID ;
     amount = PAmount ;
     pType = pPType ;
    
    }

  float getAmount()
  {
  return amount ;
  }

  void printSlip()
  {
   cout <<"******************************************" <<endl ;
   cout <<"Student ID   = "<< SID <<endl ;
   cout <<"Course ID    = "<< CID <<endl ;
   cout <<"Order ID     = "<< orderID <<endl ;
   cout <<"Total Amount = "<< amount <<endl ;
   cout <<"Payment Type = "<< pType <<endl ;
   cout <<"******************************************" <<endl<<endl ;
   
   
  }
   
};

class Refund
{
 private :
  string RID ;
  string SID ;
  string CID ;
  string reason ;
  float refund = 0 ;

 public :
  Refund(string pSID , string pCID , string pRID , string preason ){
    
    RID = pRID ;
    reason = preason ;
    SID = pSID ;
    CID = pCID ;
    refund = 0 ;
  }

  void addRefund(Payment *P){
    refund = 0.9 * P->getAmount() ;
  }

  void display()
  {
    cout << "Your refund request has been granted by the System Admin."<< endl ;
    cout << "You have received a 90% of discount of your course payment." <<endl<<endl ;
    cout << "***********************************************************"<<endl ;
    cout << "Refund ID                 = "<< RID << endl ;
    cout << "Student ID                = "<< SID << endl ;
    cout << "Course ID                 = "<< CID <<endl ;
    cout << "Reason for request refund = "<< reason << endl ;
    cout << "Refund                    = "<<refund << endl ;
    cout << "***********************************************************"<<endl<<endl ;
  }
  
  
};