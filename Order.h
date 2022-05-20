#include "Payment.h"

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