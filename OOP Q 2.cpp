#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;
int T1tickets=480,T2tickets=480,T3tickets=480,T4tickets=480,tprice=50; //variables for tickets of each train
int t1up=0,t1down=0,t2up=0,t2down=0,t3up=0,t3down=0,t4up=0,t4down=0;  // variables to calculate total amount of each journy
int choice,customer_bill;
unsigned int perchased_tickets;       // variable to book tickets
void summary_report()
{
	system("cls");
	cout<<"\nPessenger trevelled from train one   are "<<480-T1tickets<<"."<<endl;
	cout<<"Pessenger trevelled from train two   are "<<480-T2tickets<<"."<<endl;
	cout<<"Pessenger trevelled from train three are "<<480-T3tickets<<"."<<endl;
	cout<<"Pessenger trevelled from train four  are "<<480-T4tickets<<"."<<endl;
	cout<<"\nAmount collected by train 1 up journey is "<<t1up<<" $."<<endl;
	cout<<"Amount collected by train 2 up journey is "<<t2up<<" $."<<endl;
	cout<<"Amount collected by train 3 up journey is "<<t3up<<" $."<<endl;
	cout<<"Amount collected by train 4 up journey is "<<t4up<<" $."<<endl;
	cout<<"\nAmount collected by train 1 down journey is "<<t1down<<" $."<<endl;
	cout<<"Amount collected by train 2 down journey is "<<t2down<<" $."<<endl;
	cout<<"Amount collected by train 3 down journey is "<<t3down<<" $."<<endl;
	cout<<"Amount collected by train 4 down journey is "<<t4down<<" $."<<endl;
	cout<<"\n\nTotal passenger travelled on all trains are "<<(480-T1tickets)+(480-T2tickets)+(480-T3tickets)+(480-T4tickets)<<"."<<endl;
	cout<<"\n\nTotal amount collected from all journies of the day is "<<2*(t1up+t2up+t3up+t4up)<<" $."<<endl;
}
int main()
{
	string status="closed";
	ticket:
	cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
	if(T1tickets==0)
	cout<<"\t\t1:\t9:00\t\t\t10:00\t\t  50$\t\t\t\t"<<status<<endl;
	else
	cout<<"\t\t1:\t9:00\t\t\t10:00\t\t  50$\t\t\t\t"<<T1tickets<<endl;
	if(T2tickets==0)
	cout<<"\t\t2:\t11:00\t\t\t12:00\t\t  50$\t\t\t\t"<<status<<endl;
	else																	
	cout<<"\t\t2:\t11:00\t\t\t12:00\t\t  50$\t\t\t\t"<<T2tickets<<endl;
	if(T3tickets==0)
	cout<<"\t\t3:\t13:00\t\t\t14:00\t\t  50$\t\t\t\t"<<status<<endl;
	else
	cout<<"\t\t3:\t13:00\t\t\t14:00\t\t  50$\t\t\t\t"<<T3tickets<<endl;
	if(T4tickets==0)
	cout<<"\t\t4:\t15:00\t\t\t16:00\t\t  50$\t\t\t\t"<<status<<endl;
	else
	cout<<"\t\t4:\t15:00\t\t\t16:00\t\t  50$\t\t\t\t"<<T4tickets<<endl;
	cout<<"\t\t5:\tTo generate summary report"<<endl;
	cout<<"\nSelect index of train of your choice"<<endl;
	choice=getche();
	switch(choice)			//Switch to book tickets of trains
		{
			case '1':
			cout<<"\nRemeber that  every tenth member of group of upto 80 people will be ticket free"<<endl;
			cout<<"Enter number of return tickets you want to perchase"<<endl;
			cin>>perchased_tickets;
			system("cls");
			if(perchased_tickets>T1tickets)
			{
				cout<<"Sorry,Tickets not available\n\n"
				"kindly check the remaining tickets from ticket counter and perchase available tickets"<<endl;
				goto ticket;
			}
			else
			{
				if(perchased_tickets>0 && perchased_tickets<=9)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>9 && perchased_tickets<=19)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-1));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>19 && perchased_tickets<=29)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-2));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*2<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>29 && perchased_tickets<=39)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-3));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*3<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>39 && perchased_tickets<=49)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-4));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*4<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>49 && perchased_tickets<=59)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-5));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*5<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>59 && perchased_tickets<=69)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-6));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*6<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
				else if(perchased_tickets>69 && perchased_tickets<=79)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-7));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*7<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
				
			else if(perchased_tickets==80)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-8));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*8<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>80 && perchased_tickets<=480)
				{
				T1tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;	
				}
			}				//end bracket of else
			break;
			case '2':
				cout<<"\nRemeber that  every tenth member of group of upto 80 people will be ticket free"<<endl;
			cout<<"Enter number of return tickets you want to perchase"<<endl;
			cin>>perchased_tickets;
			system("cls");
			if(perchased_tickets>T2tickets)
			{
				cout<<"Sorry,Tickets not available\n\n"
				"kindly check the remaining tickets from ticket counter and perchase available tickets"<<endl;
				goto ticket;
			}
			else
			{
				if(perchased_tickets>0 && perchased_tickets<=9)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>9 && perchased_tickets<=19)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-1));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>19 && perchased_tickets<=29)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-2));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*2<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>29 && perchased_tickets<=39)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-3));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*3<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>39 && perchased_tickets<=49)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-4));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*4<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>49 && perchased_tickets<=59)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-5));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*5<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>59 && perchased_tickets<=69)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-6));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*6<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>69 && perchased_tickets<=79)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-7));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*7<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
				else if(perchased_tickets>69 && perchased_tickets<=79)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-7));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*7<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets==80)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-8));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*8<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>80 && perchased_tickets<=480)
				{
				T2tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;	
				}
			}				//end bracket of else
			break;
			case '3':
			cout<<"\nRemeber that  every tenth member of group of upto 80 people will be ticket free"<<endl;
			cout<<"Enter number of return tickets you want to perchase"<<endl;
			cin>>perchased_tickets;
			system("cls");
			if(perchased_tickets>T3tickets)
			{
				cout<<"Sorry,Tickets not available\n\n"
				"kindly check the remaining tickets from ticket counter and perchase available tickets"<<endl;
				goto ticket;
			}
			else
			{
				if(perchased_tickets>0 && perchased_tickets<=9)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;	
				}
			else if(perchased_tickets>9 && perchased_tickets<=19)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-1));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>19 && perchased_tickets<=29)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-2));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*2<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>29 && perchased_tickets<=39)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-3));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*3<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>39 && perchased_tickets<=49)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-4));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*4<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>49 && perchased_tickets<=59)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-5));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*5<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>59 && perchased_tickets<=69)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-6));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*6<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;	
				}
				else if(perchased_tickets>69 && perchased_tickets<=79)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-7));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*7<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets==80)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-8));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*8<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>80 && perchased_tickets<=480)
				{
				T3tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;	
				}
			}	//end bracket of else
			break;
			
			case '4':
			
			cout<<"\nRemeber that  every tenth member of group of upto 80 people will be ticket free"<<endl;
			cout<<"Enter number of return tickets you want to perchase"<<endl;
			cin>>perchased_tickets;
			system("cls");
			if(perchased_tickets>T4tickets)
			{
				cout<<"Sorry,Tickets not available\n\n"
				"kindly check the remaining tickets from ticket counter and perchase available tickets"<<endl;
				goto ticket;
			}
			else
			{
				if(perchased_tickets>0 && perchased_tickets<=9)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;	
				}
				else if(perchased_tickets>9 && perchased_tickets<=19)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-1));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>19 && perchased_tickets<=29)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-2));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*2<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
				else if(perchased_tickets>29 && perchased_tickets<=39)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-3));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*3<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
			else if(perchased_tickets>39 && perchased_tickets<=49)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-4));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*4<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
			else if(perchased_tickets>49 && perchased_tickets<=59)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-5));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*5<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
			else if(perchased_tickets>59 && perchased_tickets<=69)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-6));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*6<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
			else if(perchased_tickets>69 && perchased_tickets<=79)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-7));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*7<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
			else if(perchased_tickets==80)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*(perchased_tickets-8));
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				cout<<"Your discount is "<<tprice*8<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
			else if(perchased_tickets>80 && perchased_tickets<=480)
				{
				T4tickets-=perchased_tickets;
				customer_bill=(tprice*perchased_tickets);
				cout<<"You have to pay "<<customer_bill<<" $"<<endl;
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
				}
			}		// end braces of else
			break;
			case '5':
				summary_report();
			
		}			// end bracket of switch case
				return 0;
}