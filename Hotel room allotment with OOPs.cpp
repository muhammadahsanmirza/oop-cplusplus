#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class hotel{
	private:
		static int rnum;
		string cname,ccnic;
		int days;
	public:	
		hotel()
		{
			rnum++;
			cin.ignore();
			cout<<"\nCustomer name:"<<endl;
			getline(cin,cname);
			cout<<"Customer CNIC"<<endl;
			getline(cin,ccnic);
			cout<<"Number of days of room booking"<<endl;
			cin>>days;
		}
		void RoomAllotment()
		{
			if(rnum<=10)
			{
				cout<<cname<<", You have been alloted Room No. "<<rnum<<" at Ground floor"<<endl;
			}
			else if(rnum>10 && rnum<=20)
			{
				cout<<cname<<", You have been alloted Room No. "<<rnum<<" at First floor"<<endl;
			}
		}
	
};
	int hotel::rnum=0;
int main()
{
	int count=0;
	char choice;
	while (count<=20)
	{
		  hotel:
	cout<<"\t\t\t<-----Welcome to Sarena Hotel----->\n\n"<<endl;
	cout<<"Do you want to perchase a room??\n"
		  "Press \n'y' to confirm\n"
		  "'n' to reject"<<endl;
		  choice=getche();
			if(choice=='y')
	    	{
	      		count++;
	      		if(count<=10)
	      		{
	      			hotel gfloor;
	      			gfloor.RoomAllotment();
	      			goto hotel;
				}
				else if(count>10 && count<=20)
				{
					hotel ffloor;
					ffloor.RoomAllotment();
					goto hotel;
				}
		 	}
		 	else if(choice=='n')
		 	{
		 		cout<<"Thank u so much"<<endl;
		 		goto hotel;
		 	}
		 	else
		 	{
		 	cout<<"\nWrong Choice\n"
		 		  "Enter again"<<endl;
		 		goto hotel;
		 	}
	}
		system("cls");
		cout<<"Sorry, currently Room not available"<<endl;
		abort();
return 0;
}
