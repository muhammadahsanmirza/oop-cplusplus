#include<iostream>
using namespace std;
class Room
{
	protected:
		string customer_name;
		unsigned int customer_age;
		string customer_cnic;
		string phone_number;
		unsigned int room_booking_days;
		int balance;
		char room_type;
		
	public:
		// Default Constructor
		Hotel()
		{
			customer_name="N/A";
			customer_cnic="N/A";
			phone_number="N/A";
			room_booking_days=0;
		}
		// Parametrized Constructor
		Hotel(string cus_name,string cus_cnic,string ph_no,unsigned int no_of_days)
		{
			customer_name=cus_name;
			customer_cnic=cus_cnic;
			phone_number=ph_no;
			room_booking_days=no_of_days;
		} 
	
};

int main()
{
	string Customer_Name,Customer_CNIC,Customer_Phone;
	unsigned int No_of_Days;
	return 0;
}

