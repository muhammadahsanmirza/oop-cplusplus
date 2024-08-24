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
			cout<<"0";
			cout<<hours<<':';
			if(minutes<10)
			cout<<"0";
			cout<<minutes<<':';
			if(seconds<10)
			cout<<"0";
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
			pm=true;
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
			cout<<'0';
			cout<<mins<<' ';
			//string am_pm=pm ? "p.m.":"a.m.";
			string am_pm;
			if(pm==true)
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
	pm=false;
	else
	pm=true;
//	mins=(t24.getsecs()<30)?t24.getmins():t24.getmins()+ 1;
	if(t24.getsecs()<30)
	mins=t24.getmins();
	else
	mins=t24.getmins()+1;
	if(mins==60)
	{
		mins=0;
		++hrs24;
		if(hrs24==12||hrs24==24)
		{
		//	pm=(pm==true)?false:true;
		if(pm==true)
		pm=false;
		else
		pm=true;
		}
	}
	//hrs=(hrs24<13)?hrs24:hrs24-12;
	if(hrs24<13)
	hrs=hrs24;
	else
	hrs=hrs24-12;
	if(hrs==0)
	{
		hrs=12;
		pm=false;
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
			return(1);
		}
		cout<<"  Minutes: ";
		cin>>m;
		cout<<"  Seconds: ";
		cin>>s;
		time24 t24(h,m,s);
		cout<<"You Entered: ";
		t24.display();
		time12 t12(t24);
		cout<<"\n12-hour time: ";
		t12.display();
		cout<<"\n\n";
	}
		return 0;
	}

