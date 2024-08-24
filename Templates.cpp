#include<iostream>
using namespace std;
template<typename X, typename Y, typename Z>
class MyClass
{
	private:
		X a;
		Y b;
		Z c;		
	public:
		MyClass()
		{
			a=0;
			b=0;
			c=0;				
		}
		MyClass(X x,Y y,Z z)
		{
			a=x;
			b=y;
			c=z;				
		}
		X calc_area()
		{
			X temp;
			temp=a*(b*c);
			return temp;
		}
//		static MyClass add_area(MyClass A,MyClass B)
//		{
//			MyClass temp;
//			temp.a=A.a+B.a;
//			temp.b=A.b+B.b;
//			temp.c=A.c+B.c;
//			return temp;
//		}
};
//template<typename X, typename Y, typename Z>
//void add_area(MyClass m, MyClass n)
//		{
//			MyClass tempr;
//			tempr.a=m.a+n.a;
//			tempr.b=m.b+n.b;
//			tempr.c=m.c+n.c;
//			return tempr;	
//		}	
int main()
{
	MyClass <double, float, double> c1(3,2.0,3.0);
	MyClass <float, double, int> c2(2,10.5,2);
	cout<<c1.calc_area()<<endl; //will display double value 18.0
    cout<<c2.calc_area(); //will display float value 42.0
//	MyClass <double, float, double> c3;
//	c3=MyClass<double, float, double>::add_area(c1,c2);
 return 0;
}

