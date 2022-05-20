#include "Examiner.h"

int main()
{
  Person *examiner[5] ;

  examiner[0] = new Examiner("1135274132" , "Williams" , "121324343", "jamaicanspice2@verizon.net", "1976-06-02" ,  "0111213232", 46 , "IT PHD");

  examiner[1] = new Examiner("1135274133" , "Brown" , "121324343", "wvictoria813@yahoo.com", "1973-06-02" ,  "0111213232", 49 , "physics PHD");

  examiner[2] = new Examiner("1135274134" , "Taylor" , "121324343", "jander@pclnet.net", "1978-06-02" ,  "0111213232", 42 , "computer science Msc");

  examiner[3] = new Examiner("1135274135" , "Davies" , "121324343", "combcabp1@localnet.com", "1973-06-02" ,  "0111213232", 49 , "computer science Bsc");

  examiner[4] = new Examiner("1135274136" , "Wilson" , "121324343", "combcabp1@localnet.com", "1963-06-02" ,  "0111213232", 59 , "computer science PHD");


for(int i = 0 : i < 5 : i++){
  cout<< "********************************************"<<endl ;
  examiner[i] -> print();
  cout<< "********************************************"<<endl<<endl ;

return 0 ;
  
}

