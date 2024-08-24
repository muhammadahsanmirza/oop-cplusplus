#include<iostream>
#include<conio.h>
using namespace std;
class calculator{
	private:
		float num1;
		float num2;
		float num3;
		long double total;
		char operate;
	public:
		calculator()
		{
			num1=0;
			num2=0;
			num3=0;
			total=0;
			operate='N';
		}
		calculator(float n1,char op,float n2)
		{
			num1=n1;
			operate=op;
			num2=n2;
			num3=0;
			total=0;
		}
		long double add(float N1,float N2)
		{
			add:
			char ch;
			total=N1+N2;
			cout<<"Press '+' to add another number\n"
			"Press '=' for Total"<<endl;
			ch=getche();
			if(ch=='+')
			{
				cout<<"\nEnter number"<<endl;
				cin>>num3;
				add(total,num3);
			}
			else if(ch=='=')
			{
				return total;
		    }
			else 
			{
					system("cls");
				cout<<"\nWrong Operator"
				      "Enter Again"<<endl;
				goto add;
			} 
			return 0;			
		}
		long double Sub(float N1,float N2)
		{
			Sub:
			char ch;
			total=N1-N2;
			cout<<"Press '-' to Subtract another number\n"
			"Press '=' for Total"<<endl;
			ch=getche();
			if(ch=='-')
			{
				cout<<"\nEnter number"<<endl;
				cin>>num3;
				Sub(total,num3);
			}
			else if(ch=='=')
			{
				return total;
		    }
			else 
			{
					system("cls");
				cout<<"\nWrong Operator"
				"Enter Again"<<endl;
				goto Sub;
			} 
			return 0;			
		}
		long double Multiply(float N1,float N2)
		{
			Multiply:
			char ch;
			total=N1*N2;
			cout<<"Press '*' to Multiply another number\n"
			"Press '=' for Total"<<endl;
			ch=getche();
			if(ch=='*')
			{
				cout<<"\nEnter number"<<endl;
				cin>>num3;
				Multiply(total,num3);
			}
			else if(ch=='=')
			{
				return total;
		    }
			else 
			{
					system("cls");
				cout<<"Wrong Operator"
				"Enter Again"<<endl;
				goto Multiply;
			} 
			return 0;		
		}
		long double Division(float N1,float N2)
		{
			Division:
			char ch;
			if(N2==0)
			{
				cout<<"Division not possible"<<endl;
			}
			else
			{
			total=N1/N2;
			cout<<"Press '/' for Division with another number\n"
			"Press '=' for Total"<<endl;
			ch=getche();
			if(ch=='/')
			{
				cout<<"\nEnter number"<<endl;
				cin>>num3;
				if(num3==0)
				{
					cout<<"Division not possible"<<endl;
				}
				else
				{
					Division(total,num3);
				}
			}
			else if(ch=='=')
			{
				return total;
		    }
			else 
			{
					system("cls");
				cout<<"Wrong Operator\n"
				"Enter Again"<<endl;
				goto Division;
			} 
			}
			return 0;		
		}
	void calculation()
	{
		switch (operate)
		{
			case '+':
				total=add(num1,num2);
				cout<<"\nTotal="<<total;
				break;
			case '-':
				total=Sub(num1,num2);
				cout<<"\nTotal="<<total;
				break;
			case '*':
				total=Multiply(num1,num2);
				cout<<"\nTotal="<<total;
				break;
			case '/':
				total=Division(num1,num2);
				cout<<"\nTotal="<<total;
				break;
			default:
				cout<<"Invalid Operator"<<endl;
		}
	}
	~calculator()
	{	
	}	
};
int main()
{
	float N1,N2;
	char CH;
	cout<<"Enter a Number"<<endl;
	cin>>N1;
	cout<<"Enter operator"<<endl;
	CH=getche();
	cout<<"\nEnter Number"<<endl;
	cin>>N2;
	calculator C(N1,CH,N2);
	C.calculation();

 return 0;
}
