#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;
int ticket_1=480,ticket_2=480,ticket_3=480,ticket_4=480,price=50;
int t1up,t1down,t2up,t2down,t3up,t3down,t4up,t4down=0;
int choice,choice2,customer_bill,buy_ticket1,buy_ticket2, buy_ticket3, buy_ticket4,buy_ticket;
				 

int main()
{
	ticket:
		
		cout<<endl;
		cout<<"\t\tsr.no"<<"\t\tmoving timing"<<"\t\treaching timing"<<"\t\t$"<<"\t\tseats"<<endl;
		
		cout<<endl;
	    if(ticket_1==0)
	    cout<<"\t\t  1"<<"\t\t  09:00"<<"\t\t\t  10:00"<<"\t\t\t50$"<<"\t\tclosed";
	    else
	    cout<<"\t\t  1"<<"\t\t  09:00"<<"\t\t\t  10:00"<<"\t\t\t50$"<<"\t\t"<<ticket_1;
	    if(ticket_2==0)
	    cout<<"\n\t\t  2"<<"\t\t  11:00"<<"\t\t\t  12:00"<<"\t\t\t50$"<<"\t\tclosed";
	    else
	    cout<<"\n\t\t  2"<<"\t\t  11:00"<<"\t\t\t  12:00"<<"\t\t\t50$"<<"\t\t"<<ticket_2;
	    if(ticket_3==0)
	    cout<<"\n\t\t  3"<<"\t\t  13:00"<<"\t\t\t  14:00"<<"\t\t\t50$"<<"\t\tclosed";
	    else
	    cout<<"\n\t\t  3"<<"\t\t  13:00"<<"\t\t\t  14:00"<<"\t\t\t50$"<<"\t\t"<<ticket_3;
	    if(ticket_4==0)  
	    cout<<"\n\t\t  4"<<"\t\t  15:00"<<"\t\t\t  16:00"<<"\t\t\t50$"<<"\t\tclosed";
	    else
	    cout<<"\n\t\t  4"<<"\t\t  15:00"<<"\t\t\t  16:00"<<"\t\t\t50$"<<"\t\t"<<ticket_4<<endl;
	    cout<<endl<<"Select the Train timing in Which You Want to travel:)"<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<" press 5 to see the total money of tickets for upward journey"<<endl;
	    cout<<" press 6 to see the total money of tickets for downward journey"<<endl;
	    cout<<" press 7 to see the total passengers of the all trains for both upward and downward journey"<<endl;
	    
		
		
	    choice=getche();
	    system("cls");
	    
	switch (choice){
	
			case '1':
	    	cout<<"\nHow Many Ticket You wanna Get :)?"<<endl;
	    	cin>>buy_ticket1;
	    	system("cls");
	    	if(ticket_1<buy_ticket1)
	    	{
	    		cout<<"please check tickets are available or not!  :)"<<endl<<endl;
	    		goto ticket;
	    	}
			else
			{
				if(buy_ticket1>0 && buy_ticket1<=9)
				{
				ticket_1-=buy_ticket1;
				customer_bill=buy_ticket1*price;
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=10 && buy_ticket1<=19)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*(buy_ticket1-1);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You is:"<<price*1<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=20 && buy_ticket1<=29)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*(buy_ticket1-2);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*2<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=30 && buy_ticket1<=39)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*(buy_ticket1-3);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*3<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=40 && buy_ticket1<=49)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*(buy_ticket1-4);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*4<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=50 && buy_ticket1<=59)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*(buy_ticket1-5);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*5<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=60 && buy_ticket1<=69)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*(buy_ticket1-6);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*6<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=70 && buy_ticket1<=79)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*(buy_ticket1-7);
				cout<<"Your Payment:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*7<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket1>=80 && buy_ticket1<=480)
				{
				ticket_1-=buy_ticket1;
				customer_bill=price*buy_ticket1;
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t1up+=customer_bill/2;
				t1down+=customer_bill/2;
				goto ticket;
			   }
			   break;
		}
			   case '2':	
			   cout<<"\nHow Many Ticket You wanna Get :)?"<<endl;
	    	cin>>buy_ticket2;
	    	system("cls");
	    	if(ticket_2<buy_ticket2)
	    	{
	    		cout<<"please check tickets are available or not!  :)"<<endl<<endl;
	    		goto ticket;
	    	}
			else
			{
				if(buy_ticket2>0 && buy_ticket2<=9)
				{
				ticket_2-=buy_ticket2;
				customer_bill=buy_ticket2*price;
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=10 && buy_ticket2<=19)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*(buy_ticket2-1);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=20 && buy_ticket2<=29)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*(buy_ticket2-2);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*2<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=30 && buy_ticket2<=39)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*(buy_ticket2-3);
				cout<<"Your Payment:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*3<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=40 && buy_ticket2<=49)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*(buy_ticket2-4);
				cout<<"Your Payment:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*4<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=50 && buy_ticket2<=59)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*(buy_ticket2-5);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*5<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=60 && buy_ticket2<=69)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*(buy_ticket2-6);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*6<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=70 && buy_ticket2<=79)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*(buy_ticket2-7);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*7<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket2>=80 && buy_ticket2<=480)
				{
				ticket_2-=buy_ticket2;
				customer_bill=price*buy_ticket2;
				cout<<"Your Payment:"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t2up+=customer_bill/2;
				t2down+=customer_bill/2;
				goto ticket;
			   }
			   break;
		}
		case '3':
	    	cout<<"\nHow Many Ticket You wanna Get :)?"<<endl;
	    	cin>>buy_ticket3;
	    	system("cls");
	    	if(ticket_3<buy_ticket3)
	    	{
	    		cout<<"please check tickets are available or not!  :)"<<endl<<endl;
	    		goto ticket;
	    	}
			else
			{
				if(buy_ticket3>0 && buy_ticket3<=9)
				{
				ticket_3-=buy_ticket3;
				customer_bill=buy_ticket3*price;
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=10 && buy_ticket3<=19)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*(buy_ticket3-1);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=20 && buy_ticket3<=29)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*(buy_ticket3-2);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*2<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=30 && buy_ticket3<=39)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*(buy_ticket3-3);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*3<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=40 && buy_ticket3<=49)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*(buy_ticket3-4);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*4<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=50 && buy_ticket3<=59)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*(buy_ticket3-5);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*5<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=60 && buy_ticket3<=69)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*(buy_ticket3-6);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*6<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=70 && buy_ticket3<=79)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*(buy_ticket3-7);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*7<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket3>=80 && buy_ticket3<=480)
				{
				ticket_3-=buy_ticket3;
				customer_bill=price*buy_ticket3;
				cout<<"Your Payment for tickets is :"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t3up+=customer_bill/2;
				t3down+=customer_bill/2;
				goto ticket;
		}
		break;
			   }
	
		case '4':
	    	cout<<"\nHow Many Ticket You wanna Get :)?"<<endl;
	    	cin>>buy_ticket4;
	    	system("cls");
	    	if(ticket_4<buy_ticket4)
	    	{
	    		cout<<"please check tickets are available or not!  :)"<<endl<<endl;
	    		goto ticket;
	    	}
			else
			{
				if(buy_ticket4>0 && buy_ticket4<=9)
				{
				ticket_4-=buy_ticket4;
				customer_bill=buy_ticket4*price;
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=10 && buy_ticket4<=19)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*(buy_ticket4-1);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=20 && buy_ticket4<=29)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*(buy_ticket4-2);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*2<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=30 && buy_ticket4<=39)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*(buy_ticket4-3);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*3<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=40 && buy_ticket4<=49)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*(buy_ticket4-4);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*4<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=50 && buy_ticket4<=59)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*(buy_ticket4-5);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*5<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=60 && buy_ticket4<=69)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*(buy_ticket4-6);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*6<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=70 && buy_ticket4<=79)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*(buy_ticket4-7);
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				cout<<"Discount For You:"<<price*7<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   else if(buy_ticket4>=80 && buy_ticket4<=480)
				{
				ticket_4-=buy_ticket4;
				customer_bill=price*buy_ticket4;
				cout<<"Your Payment for tickets is:"<<customer_bill<<endl;
				// oper neechy dono ka 50 price hy isi lie oper wala 25 ka or neecy wala b 25 ka hoga
				t4up+=customer_bill/2;
				t4down+=customer_bill/2;
				goto ticket;
			   }
			   break;
		}
		case '5':
			// yaha pr ab srf oper k tickets hongy ,, jitny b hongy unsy 25 multiply krdega
			cout<<"total money of tickets for upward journey at 9  to 10:\t"<<t1up<<endl;
			cout<<"total money of tickets for upward journey at 11 to 12:\t"<<t2up<<endl;
			cout<<"total money of tickets for upward journey at 13 to 14:\t"<<t3up<<endl;
			cout<<"total money of tickets for upward journey at 15 to 16:\t"<<t4up<<endl;
			goto ticket;
			break;
			case '6':
					// yaha pr ab srf neechy k tickets hongy ,, jitny b hongy unsy 25 multiply krdega
				cout<<"total money of tickets for downward journey at 9  to 10:\t"<<t1down<<endl;
				cout<<"total money of tickets for downward journey at 11 to 12:\t"<<t2down<<endl;
				cout<<"total money of tickets for downward journey at 13 to 14:\t"<<t3down<<endl;
				cout<<"total money of tickets for downward journey at 15 to 16:\t"<<t4down<<endl;
				goto ticket;
				case '7':
			cout<<"total passengers of train for upward journey at 9  to 10:\t"<<480-ticket_1<<endl;
		    cout<<"total passengers of train for upward journey at 11 to 12:\t"<<480-ticket_2<<endl;
			cout<<"total passengers of train for upward journey at 13 to 14:\t"<<480-ticket_3<<endl;
			cout<<"total passengers of train for upward journey at 15 to 16:\t"<<480-ticket_4<<endl;
			
		    cout<<"total passengers of train for downward journey at 9  to 10:\t"<<480-ticket_1<<endl;
			cout<<"total passengers of train for downward journey at 11 to 12:\t"<<480-ticket_2<<endl;
			cout<<"total passengers of train for downward journey at 13 to 14:\t"<<480-ticket_3<<endl;
			cout<<"total passengers of train for downward journey at 15 to 16:\t"<<480-ticket_4<<endl;	
		    goto ticket;
		}
				
				
		
}