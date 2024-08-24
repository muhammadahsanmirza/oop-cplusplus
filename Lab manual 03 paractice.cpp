#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define esc 27
using namespace std;
class tollbooth
{
	private:
	static unsigned int no_of_cars; 
	double toll_tax;
	public:
		tollbooth()
		{
			no_of_cars=0;
			toll_tax=0;
		}
		void payingcar()
		{
			++no_of_cars;
			toll_tax=toll_tax+0.50;
		}
		void nonpaycar()
		{
			no_of_cars++;
		}
		const void showSummary()
		{
			cout<<"Total number of cars passed the toolbooth:\t"<<no_of_cars<<endl;
			cout<<"Total amount collected:\t"<<toll_tax<<" $"<<endl;
		}
};
	unsigned int tollbooth:: no_of_cars=0;
int main()
{
tollbooth ToolBooth;
	char choice;
	cout<<"\tPress:\n"
		  "\t1: For paying car\n"
		  "\t2: For non paying car\n"
		  "\t3: Exit and get summary"<<endl;
	do
	{
		choice=getche();
		if(choice=='1')
		ToolBooth.payingcar();
		else if(choice=='2')
		ToolBooth.nonpaycar();
		else
		cout<<"\nWrong Input"<<endl;
	}
	while(choice==esc);
	ToolBooth.showSummary();
	/*switch(choice)
	{
		case '1':
			//	system("cls");
			ToolBooth.payingcar();
			break;
		case'2':
			//	system("cls");
			ToolBooth.nonpaycar();
			break;
		case'3':
				system("cls");
			ToolBooth.showSummary();
			abort();
			break;
		default:
				system("cls");
			cout<<"Wrong Choice"<<endl;
			main();
			break;
	}
	main();*/
 return 0;
}
