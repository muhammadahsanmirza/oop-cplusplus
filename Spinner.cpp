#include<iostream>
using namespace std;
class person
{
	public:
		string pname;
		virtual void getdata()=0;
		virtual void showdata()=0;
		
};
class Bowler: public person
{
	public:
	float speed;
	virtual int getspeed()=0;
};
class Spinner: public Bowler
{
	public:
		void getdata()
		{
			cout<<"Enter name: "<<endl;
			getline(cin,pname);
		}
		int getspeed ()
		{
			cout<<"Enter Speed:"<<endl;
			cin>>speed;
			return speed;
		}
		void showdata()
		{
			cout<<"Name is"<<pname;
			cout<<"Speed: "<<speed;
		}
};
class bowler_comparison
{
	public:
		bool checkSpeedEquality(int a, int b)
		{
			(a<b||a>b)?true:false;
		}
};
int main()
{
	Bowler *b;
	//person p1;
	Spinner s1;
	b=& s1;
	b->getdata();
	int speed1=b->getspeed();
	cin.ignore();
	Spinner s2;
	b=& s2;
	b->getdata();
	int speed2=b->getspeed();
	bowler_comparison B;
	bool t=B.checkSpeedEquality(speed1,speed2);
	if(t=true)
	{
		cout<<"\nBoth bowler have different speed";
	}
	else
	{
		cout<<"\nBoth bowlers have same speed"; 
	}
 return 0;
}

