#include<iostream>
#include <cstdlib>
using namespace std;
class UIIT_Calc
{
	private:
		char arr[40];
		double number1,number2;
	public:
		getData()
		{
			cout<<"Enter First Number"<<endl;
			cin>>arr[0];
			cout<<"Enter Second Number"<<endl;
			cin>>arr[1];
		}
		
};
int main()
{
  UIIT_Calc c1;
    try { 
c1.getData();                  //get Number1 and Number2 in character array[40] and operator in char
	c1.Validate1();     //if Number1 has characters 0-9 or dot(.) then assign it to class member double
  // Operand1 else throw exception which shows message "Error:" << BadOpd << 
 //" is not a valid number". The builtin  isdigit(Number1[i]) function will help you
  //to check its number or not & atof(Number1) will help you convert into double. 
c1.Validate2(); 
try {	
c1.Calculator();               //This function will use switch case to display the result for four 
    //operators +, - , * and / . For all other operators it throws exception and 
}			         //displays  "Operation Error: " << e2.op << " is not a valid operator".
catch( UIIT_Calc::DivError e1)
{
     cout << "\nBad Operation: " << e1.str; //Will display "Bad Operation: Div by 0 not allowed"
	}
    }
    catch( UIIT_Calc::OpError e2)
    {	cout << "\nOperation Error: " << e2.op << " is not a valid operator";
    }
    catch( char *BadOpd)
    {	cout << "\nError: " << BadOpd << " is not a valid number"; 
    }

}

