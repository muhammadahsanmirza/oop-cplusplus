#include<iostream>
using namespace std;
class dist
{
	int feet,inch;
	public:
		dist(int x,int y)
		{
			feet=x;
			inch=y;
		}
		void sum(dist dist1,dist dist2)
		{
			feet=dist1.feet+dist2.feet;
			inch=dist1.inch+dist2.inch;
			
				if(inch%12==0)
			{
				feet++;
				inch=inch-12;
			}				
			cout<<"feet"<<feet<<endl;
			cout<<"inchres"<<inch<<endl;
		}
};

int main()
{
dist d1(2,30),d2(2,40);
d1.sum(d1,d2);

 return 0;
}
