#include<iostream>
using namespace std;
/*			Lab 02				*/
/*
			Q1		
class Age
{
	private:
		int age_of_Ali;
		int age_of_Ahmad;
	public:
	// Default constructor
	Age()
	{
		age_of_Ali=0;
		age_of_Ahmad=0;
	}
	// Parametrized Constructor
	Age(int ageofali,int ageofahmad)
	{
		age_of_Ali=ageofali;
		age_of_Ahmad=ageofahmad;
	}
	void showage()
	{
		cout<<"Age of Ali:\t"<<age_of_Ali<<endl;	
		cout<<"Age of Ahmad:\t"<<age_of_Ahmad<<endl;	
	}	
};
*/
/*
			Q2			
class length
{
	private:
		float Length;
	public:
		length(void);
		void setlength(float );
		int showlength();
};
length::length()
{
	Length=0;
}
void length:: setlength(float length_value)
{
	Length=length_value;
}
int length::showlength()
{
	return Length;
}
*/
/*
			Q3				
class serialnumber
{
	private:
		static int count;
		int serial_no;
	public:
		serialnumber()
		{
			count++;
			serial_no=0;
			cout<<"Object '"<<count<<"' created"<<endl;
		}
		void setserialnumber()
		{
			cout<<"Enter serial number"<<endl;
			cin>>serial_no;	
		}
		void showserialnumber()
		{
			cout<<"Object number is:"<<count<<endl;
			cout<<"Serial number is:"<<serial_no<<endl;
			
		}
	~serialnumber()
	{
		cout<<"Object '"<<count<<"' Destroyed"<<endl;
	}
};
int serialnumber::count=0;
*/
int main()
{
/*
			Q1		
Age age1;
age1.showage();
Age age2(30,29);
age2.showage();
*/
/*
			Q2		
	length L1;
	float l;
	cout<<"Enter value of length"<<endl;
	cin>>l;
	L1.setlength(l);
	cout<<"Length value is:\t"<<L1.showlength()<<endl;
	main();
*/
/*
				Q3	
	{
	serialnumber serial1;
	serial1.setserialnumber();
	serial1.showserialnumber();
	}
	{
	serialnumber serial2;
	serial2.setserialnumber();
	serial2.showserialnumber();
	}
	{
	serialnumber serial3;
	serial3.setserialnumber();
	serial3.showserialnumber();
	}
*/
 return 0;
}
