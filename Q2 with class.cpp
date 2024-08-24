 #include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;
class TicketCounter{
	private:
		int T1tickets;
		int T2tickets;
		int T3tickets;
		int T4tickets;
		int total_discount;
		int tprice;
		int t1up,t1down,t2up,t2down,t3up,t3down,t4up,t4down;
	public:
		TicketCounter()
		{
			T1tickets=480;
			T2tickets=480;
			T3tickets=480;
			T4tickets=480;
			total_discount=0;
			tprice=50;
			t1up=0,t1down=0,t2up=0,t2down=0,t3up=0,t3down=0,t4up=0,t4down=0;
		}
		void calculation(int CHOICE,int perchased_tickets)
		{
			switch(CHOICE)
			{
				case '1':
					if(perchased_tickets>T1tickets)
			{
				cout<<"Sorry,Tickets not available\n\n"
				"kindly check the remaining tickets from ticket counter and perchase available tickets"<<endl;
			}
			
		}
		void display(int Choice,int Tickets)
		{
	int ticket1=0,ticket2=0,ticket3=0,ticket4=0;
			{
				if(Choice=='1')
				ticket1=Tickets;
				else if(Choice=='2')
				ticket2=Tickets;
				else if(Choice=='3')
				ticket3=Tickets;
				else if(Choice=='4')
				ticket4=Tickets;
				else
				cout<<"Invalid Choice"<<endl;
			}
			
			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
				T1tickets-=ticket1;
			if(T1tickets>0 && T1tickets<=480)
				{cout<<"\t\t1:\t9:00\t\t\t10:00\t\t  50$\t\t\t\t"<<T1tickets<<endl;
				ticket1=0;
				}
			else
			{
			cout<<"\t\t1:\t9:00\t\t\t10:00\t\t  50$\t\t\t\tClosed"<<endl;
				
			}
				T2tickets-=ticket2;
			if(T2tickets>0 && T2tickets<=480)
			{
				cout<<"\t\t2:\t11:00\t\t\t12:00\t\t  50$\t\t\t\t"<<T2tickets<<endl;
				ticket2=0;
				
			}
			else
			{
			cout<<"\t\t2:\t11:00\t\t\t12:00\t\t  50$\t\t\t\tClosed"<<endl;
			}																	
				T3tickets-=ticket3;
			if(T3tickets>0 && T3tickets<=480)
			{
			cout<<"\t\t3:\t13:00\t\t\t14:00\t\t  50$\t\t\t\t"<<T3tickets<<endl;
				ticket3=0;				
			}
			else
			{
			cout<<"\t\t3:\t13:00\t\t\t14:00\t\t  50$\t\t\t\tClosed"<<endl;
			}	
				T4tickets-=ticket4;
			if(T4tickets>0 && T4tickets<=480)
			{
			cout<<"\t\t4:\t15:00\t\t\t16:00\t\t  50$\t\t\t\t"<<T4tickets<<endl;
				ticket4=0;
			}
			else
			{
			cout<<"\t\t4:\t15:00\t\t\t16:00\t\t  50$\t\t\t\tClosed"<<endl;
			}
			calculation(Choice,Tickets);
//			switch(Choice)
//			{
//				case '1':
//					if(T1tickets==0 || Tickets>T1tickets)
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//					cout<<"\t\t1:\t9:00\t\t\t10:00\t\t  50$\t\t\t\tClosed"<<endl;
//					}
//					else
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//					T1tickets-=Tickets;
//					cout<<"\t\t1:\t9:00\t\t\t10:00\t\t  50$\t\t\t\t"<<T1tickets<<endl;	
//					}
//					break;
//				case '2':
//					if(T2tickets==0 || Tickets>T2tickets)
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//					cout<<"\t\t2:\t11:00\t\t\t12:00\t\t  50$\t\t\t\tClosed"<<endl;						
//					}
//					else
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//						T2tickets=T2tickets-Tickets;
//					cout<<"\t\t2:\t11:00\t\t\t12:00\t\t  50$\t\t\t\t"<<T2tickets<<endl;	
//					}
//					break;	
//				case '3':
//					if(T3tickets==0 || Tickets>T3tickets)
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//					cout<<"\t\t3:\t13:00\t\t\t14:00\t\t  50$\t\t\t\tClosed"<<endl;						
//					}
//					else
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//						T3tickets=T3tickets-Tickets;
//					cout<<"\t\t3:\t13:00\t\t\t14:00\t\t  50$\t\t\t\t"<<T3tickets<<endl;	
//					}
//					break;
//				case '4':
//					if(T4tickets==0 || Tickets>T4tickets)
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//					cout<<"\t\t3:\t15:00\t\t\t16:00\t\t  50$\t\t\t\tClosed"<<endl;						
//					}
//					else
//					{
//			cout<<"\t\tIndex\tDeparture Time\t\tReturn time\tReturn ticket Price($)\tAvialable Tickets"<<endl;
//						T4tickets=T4tickets-Tickets;
//					cout<<"\t\t3:\t13:00\t\t\t14:00\t\t  50$\t\t\t\t"<<T4tickets<<endl;	
//					}
//					break;
//				default:
//					cout<<"Wrong Entry"<<endl;																
//			}
			
		}
};
int main()
{
	TicketCounter T1;
	char Ch;
	int choice,tickets;
	do
	{cout<<"\t\tIndex\tDeparture Time\t\tReturn time"<<endl;
	cout<<"\t\t1:\t9:00\t\t\t10:00"<<endl;
	cout<<"\t\t2:\t11:00\t\t\t12:00"<<endl;
	cout<<"\t\t3:\t13:00\t\t\t14:00"<<endl;
	cout<<"\t\t4:\t15:00\t\t\t16:00"<<endl;
	cout<<"\nSelect index of train of your choice:"<<endl;
	choice=getche();
	cout<<"\nEnter number of tickets you want to buy:"<<endl;
	cin>>tickets;
		system("cls");
	T1.display(choice,tickets);
	cout<<"Press 'Y' to perchase Tickets"<<endl;
	Ch=getche();
		system("cls");
	}
	while(Ch=='y');
 	return 0;
}
