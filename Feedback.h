class Feedback{
	private:
		string fId;
		string description;
		string date;
		
	public:
		Feedback(){};
		void setDetails(string pfId, string pDate);
		void setFeedback(string pDes);
};