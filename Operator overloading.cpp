#include<iostream>
using namespace std;
class Expression
{
	private:
		double val;
	public:
		Expression()
		{
			val=0;	
		}
		Expression(double a)
		{
			val=a;	
		}
		double showValue()
		{
			return val;	
		}
		Expression operator +(Expression A)
		{
			return val+A.val;	
		}
		Expression operator *(Expression A)
		{
			return val*A.val;	
		}
		Expression operator --()
		{
			return val;	
		}
		Expression operator --(int)
		{
			return --val;	
		}	
};
int main()
{
	Expression E1; //class Expression has only one variable 'val'
    Expression E2(5.5);
    Expression E3(2.0); 
    cout<<E3.showValue()<<endl; //showValue will return 'val'. Here output is 2.0
    Expression E4;
    E4=E3;
    cout<<E4.showValue()<<endl;
    E1=E2+--E3*E4--;
   cout<<E1.showValue();

 return 0;
}

