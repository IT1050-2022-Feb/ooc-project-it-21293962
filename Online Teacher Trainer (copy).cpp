#include<iostream>
#include<cstring>

#define SIZE 2

using namespace std;

// Person class
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

// Employee class
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

// Examiner class
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

// Feedback class
class Feedback{
	private:
		string fId;
		string description;
		string date;
		
	public:
		Feedback(){};
		void setDetails(string pfId, string pDate);
		void setFeedback(string pDes);
		string getFeedback();
};

// Course class
class Course{
	private:
		string cId;
		string cName;
		string c_description;
		double c_amount;
		Feedback *feedback[10];
		
	public:
		Course(){};
		Course(Feedback *feed){
			feedback[0] = feed;
		}
		void setDetails(string e_cId, string e_cName, string e_c_description, double e_c_amount);
};

// Certificate class
class Certificate
{
private:
	string passType;
	string ctDate;

public:
	Certificate(){};
	void setpassType(string pt);
	string getpassType();
	void setctDate(string dt);
	string getctDate();
	void displayCertificateDetails();
	~Certificate(){};
};

// Result class
class Result
{
private:
	Certificate* cft[SIZE];
	int marks;
	char grade;

public:
	Result(){};
	void addCertificate(Certificate* cft1, Certificate* cft2);
	void setMarks(int m);
	int getMarks();
	void displayGrade();
	~Result(){};
};

// Member class
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
void addPaymentDetails(Payment *pPayment);
};

// Payment class
class Payment{
	protected:
		int oderId;
		string number;
		string pType;
		double amount;
		string date;
		Member *member;
		
	public:
		Payment(int sOderId, string spType, double aAmount, string pNumber, string pDate){
			oderId =sOderId;
			pType = spType;
			amount = aAmount;
			number = pNumber;
			date = pDate;
		}

		void addMemberDetails(Member *pMember);
		double calcTotalAmount();
		void printSlip();
		void authorize();
		void displayDetails();
		float getAmount()
  		{
  			return amount ;
  		}
};

// Order class
class Order{
	private:
		string date;
		Payment *payment;
		
	public:
		Order(string pDate){
			date = pDate;
		}
		void addPaymentDetails(Payment *pay);
};

// SystemAdmin class
class SystemAdmin : public Employee{
	private:
		string aId;
		Certificate *certificate[10];
		
	public:
		SystemAdmin(string paId, char pname[], string pNic, string pEmail, string pPhoneNo): 
		Employee(pname, pEmail, pNic, pPhoneNo){
			aId = paId;
		}
		void addCourse(Course *pCourse);
		void removeCourse(Course *pCourse);
		void verifyDetails(Member *pMem);
		void monitorProgress(Payment *pPay);
		void issueCertificate(Certificate *pCer);
    void print(){
      Employee::print();
      cout << "Admin ID : " << aId << endl ; 
    }
		
};

// Credit class
class Credit : public Payment{
	private:
		string expire;
	
	public:
		Credit(int sOderId, string spType, double aAmount, string pNumber, string pDate, string pExpire): Payment(sOderId, spType, aAmount, pNumber, pDate){
			expire = pExpire;
		}
};

// Paypal class
class Paypal : public Payment{
	private:
		string email;
		
	public:
		Paypal(int sOderId, string spType, double aAmount, string pNumber, string pDate, string pEmail): Payment(sOderId, spType, aAmount, pNumber, pDate){
			email = pEmail;
		}
};

// Payhere class
class Payhere : public Payment{
	private:
		string email;
		
	public:
		Payhere(int sOderId, string spType, double aAmount, string pNumber, string pDate, string pEmail): Payment(sOderId, spType, aAmount, pNumber, pDate){
			email = pEmail;
		}
};

// Exam class
class Exam
{
private:
	Result *re[SIZE];
	string date;
	string examType;
	string cName;
	int noOfStudents;

public:
	Exam(){};
	void setDate(string d);
	string getDate();
	void setExamType(string t);
	string getExamType();
	void setcName(string n);
	string getcName();
	void setnoOfStudents(int s);
	int getonOfStudents();
	void displayExamDetails();
	~Exam(){};
};

// Refund class
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

// Visitor class
class Visitor: public Person {
 
public:
   Visitor(char pname[], string p_email): Person(pname,p_email) {
     
   }
   void display() {
      cout << "this is Visitor class"        
           << " derived class from Person" 
           << endl;
    }
    void displayDetails() {
     cout << "name:"<< name << endl << "email:" << email  << endl; 
   }
};


int main(){
  //creating a Examiner object
	Examiner * examiner1 = new Examiner("E001", "Kamal",  "123456789v", "kamal123@gmail.com", "04/12/1997", "0771234567", 25, "under graduate");

  //creating a Feedback object
  Feedback * feedback1 = new Feedback();

  //creating a Course object
  Course * course1 = new Course(feedback1);

  //creating a Certificate object
  Certificate * certificate1 = new Certificate();

  //creating a Result object
  Result * result1 = new Result();

  //creating a Member object
  Member * member1 = new Member("Nimal", "nimal705@gmail.com", "it154578", "07/02/2000", 22, "no. 302, colombo", "200012345456", "Male", "0714568797", course1, result1);

  //creating Order object
  Order * order1 = new Order("01/02/2022");

  //creating SystemAdmin object
  SystemAdmin * systemAdmin1 = new SystemAdmin("A001", "Nimalini", "12375379v", "nimalini722@gmail.com", "0724568793");

  //creating Credit object
  Credit * credit1 = new Credit(1, "online", 52000, "753951", "05/04/2021", "09/09/2022");

  //creating Paypal object
  Paypal * paypal1 = new Paypal(2, "online", 120000, "785149", "22/05/2022", "abc502@gmail.com");

  //creating Payhere object
  Payhere * payhere1 = new Payhere(3, "online", 120000, "785149", "22/05/2022", "xyz465@gmail.com");

  //creating Exam object
  Exam * exam1 = new Exam();

  //creationg Refund object
  Refund * refund1 = new Refund("it132465", "it4526", "R001", "Economic problem");

  //creating Visitor object
  Visitor * visitor1 = new Visitor("priya", "priya2111@gmail.com");

  cout << "Online Teacher Trainer" << endl;
  
	return 0;
}