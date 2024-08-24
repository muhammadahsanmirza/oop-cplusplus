#include<iostream>
using namespace std;
class time24
{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		time24()
		{
			hours=0;
			minutes=0;
			seconds=0;
		}
		time24(int h, int m , int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
		void display() const
		{
			if(hours<10)
			cout<<'0';		// Executed only when "if" statement is true
			cout<<hours<<':';
			if(minutes<10)
			cout<<'0';		// Executed only when "if" statement is true
			cout<<minutes<<':';
			if(seconds<10)
			cout<<'0';		// Executed only when "if" statement is true
			cout<<seconds;
		}
		int gethrs() const { return hours;}
		int getmins() const { return minutes;}
		int getsecs() const { return seconds;}
};
class time12
{
	private:
		bool pm; 
		int hrs;
		int mins;
	public:
		time12()
		{
			pm=1;
			hrs=0;
			mins=0;
		}
		time12(time24);
//		time12(bool ap,int h ,int m)
//		{
//			pm=ap;
//			hrs=h;
//			mins=m;
//		}
		void display() const
		{
			cout<<hrs<<':';
			if(mins<10)
			cout<<'0';		// Executed only when if statement is true
			cout<<mins<<' ';
		//	string am_pm=pm ? "p.m.":"a.m.";
			string am_pm;	//	am_pm will get value of p.m if bool pm is tue(1)
			if(pm==1)
			am_pm="p.m.";
			else
			am_pm="a.m.";
			cout<<am_pm;
		}
};
time12::time12(time24 t24 )
{
	int hrs24=t24.gethrs();
//	pm=t24.gethrs()<12 ? false:true;
	if(t24.gethrs()<12)
	{
		pm=0;	// if hours are less than 12 pm will be 0
	}
	else
	{
		pm=1;
	}
//	mins=(t24.getsecs()<30)? t24.getmins():t24.getmins()+ 1;
	if(t24.getsecs()<30)
	{
		mins=t24.getmins();		// if seconds are greater than 30 minutes will be incremented by 1
	}
	else
	{
		mins=t24.getmins()+1;
	}
	if(mins==60)
	{
		mins=0;
		++hrs24;
		if(hrs24==12||hrs24==24)// if hours24 is equal to 12 or 24 the value of pm will be changed from 0 to 1 and vice versa
		{
			//	pm=(pm==true)?false:true;
			if(pm==1)
			pm=0;
			else
			pm=1;
		}
	}
//	hrs=(hrs24<13)?hrs24:hrs24-12;
	if(hrs24<13)
	hrs=hrs24;
	else	
	hrs=hrs24-12;
	if(hrs==0)
	{
		hrs=12;			
		pm=0;
	}
}
int main()
{
	int h,m,s;
	while(true)
	{
		cout<<"Enter 24-hour Time: \n";
		cout<<"     Hours ( 0 to 23): ";
		cin>>h;
		if(h>23)	
		{
			return 0;
		}
		cout<<"  Minutes: ";
		cin>>m;
		cout<<"  Seconds: ";
		cin>>s;
		time24 t24(h,m,s);
		cout<<"You Entered: ";
		t24.display();
		time12 t12=t24;
		cout<<"\n12-hour time: ";
		t12.display();
		cout<<"\n\n";
	}
		return 0;
	}


