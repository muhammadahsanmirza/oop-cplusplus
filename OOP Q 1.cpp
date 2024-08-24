#include<iostream>
#include<conio.h>
#include<cstring>
#include<fstream>
using namespace std;
char choice=0;
float price=0;
float total=0;
ofstream fout("BILL.txt");
void sim()
{
	cout<<"\nSim Cards"<<endl;
	cout<<"\nIndex\tCategory\tItem Code\tDescription\t\t\t\t\t\tPrice($)\n"
	"1:\tSim Card\tSMNO\t\tSim Free(no Sim Card perchased)\t\t\t\t0.00 $\n"
	"2:\tSim Card\tSMPG\t\tPay As You Go(Sim Card perchased)\t\t\t9.99 $\n"
	"\nKindly select your choice"<<endl;
	choice=getche();
		system("cls");
	switch(choice)
		{
		case '1':
			price=0.0;
			total+=price;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
		case '2':
			price=9.99;
			total+=price;
			fout<<"\nSim Card\t"<<"Pay As You Go\t"<<price<<endl;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
		default:
			cout<<"Wrong Choice\n"
			"Enter Again"<<endl;
				sim();
		}	
}
void Cases()
{
	cout<<"\nCases"<<endl;
	cout<<"\nIndex\tCategory\tItem Code\tDescription\t\t\t\t\t\tPrice($)\n"
	"1:\tCase\t\tCSST\t\tStandard\t\t\t\t\t\t0.0 $\n"
	"2:\tCase\t\tCSLX\t\tLuxury\t\t\t\t\t\t\t50.0 $\n"
	"\nKindly select your choice"<<endl;
	choice=getche();
		system("cls");
	switch(choice)
		{
		case '1':
			price=0.0;
			total+=price;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
			break;
		case '2':
			price=50.0;
			total+=price;
			fout<<"\nCase\t"<<"Luxury\t"<<price<<endl;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
			break;
		default:
			cout<<"Wrong Choice\n"
			"Enter Again"<<endl;
				Cases();
		}
}
void charger()
{
	cout<<"\nCharger"<<endl;
	cout<<"\nIndex\tCategory\tItem Code\tDescription\t\t\t\t\t\tPrice($)\n"
	"1:\tCharger\t\tCGCR\t\tCar\t\t\t\t\t\t\t19.99 $\n"
	"2:\tCharger\t\tCGHM\t\tHome\t\t\t\t\t\t\t15.99 $\n"
	"3:\tNone\n"
	"4:\tBoth\n"
	"\nKindly select your choice"<<endl;
	choice=getche();
		system("cls");
	switch(choice)
		{
		case '1':
			price=19.99;
			total+=price;
			fout<<"\nCharger\t"<<"Car\t"<<price<<endl;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
			break;
		case '2':
			price=15.99;
			total+=price;
			fout<<"\nCharger\t"<<"Home\t"<<price<<endl;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
			break;
		case '3':
			price=0.0;
			total+=price;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
			break;
		case '4':
			price=35.98;
			total+=price;
			fout<<"\nCharger\t"<<"Car\t"<<19.99<<endl;
			fout<<"\nCharger\t"<<"Home\t"<<15.99<<endl;
			cout<<"\nYour current bill is:"<<total<<"$"<<endl;
			break;
		default:
			cout<<"Wrong Choice\n"
			"Enter Again"<<endl;
				charger();
		}
}
void phone()
{
	cout<<"Index\tCategory\tItem Code\tDescription\t\t\t\t\t\tPrice($)\n"
		"1:\tPhone\t\tBPCM\t\tCompact\t\t\t\t\t\t\t29.99\n"
		"2:\tPhone\t\tBPSH\t\tClam Shell\t\t\t\t\t\t49.99\n"
		"3:\tPhone\t\tRPSS\t\tRoboPhone-5-inch screen and 64 GB memory\t\t199.99\n"
		"4:\tPhone\t\tRPLL\t\tRoboPhone-6-inch screen and 256 GB memory\t\t499.99\n"
		"5:\tPhone\t\tYPLS\t\tY-Phone Standard-6-inch screen and 64 GB memory\t\t549.99\n"
		"6:\tPhone\t\tYPLL\t\tY-Phone Deluxe-6-inch screen and 256 GB memory\t\t649.99\n"
		"\nKindly select respective index"<<endl;
}
void pcal()
{
		phone();
		choice=getche();
		system("cls");
		switch(choice)
		{
			case '1':
				price=29.99;
				total+=price;
				fout<<"\nPhone\t"<<"Compact\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '2':
				price=49.99;
				total+=price;
				fout<<"\nPhone\t"<<"Clam Shell\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '3':
				price=199.99;
				total+=price;
				fout<<"\nPhone\t"<<"RoboPhone\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '4':
				price=499.99;
				total+=price;
				fout<<"\nPhone\t"<<"RoboPhone\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '5':
				price=549.99;
				total+=price;
				fout<<"\nPhone\t"<<"Y-Phone Standard\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '6':
				price=649.99;
				total+=price;
				fout<<"\nPhone\t"<<"Y-Phone Deluxes\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			default:
			cout<<"Wrong Choice\n"
			"Enter Again"<<endl;
				pcal();
		}
}
void Discountcal()
{
			phone();
		choice=getche();
		system("cls");
		switch(choice)
		{
			case '1':
				price=29.99;
				total+=(price*90/100);
				fout<<"\nPhone\t"<<"Compact\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '2':
				price=49.99;
				total+=(price*90/100);
				fout<<"\nPhone\t"<<"Clam Shell\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '3':
				price=199.99;
				total+=(price*90/100);
				fout<<"\nPhone\t"<<"RoboPhone\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '4':
				price=499.99;
				total+=(price*90/100);
				fout<<"\nPhone\t"<<"RoboPhone\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '5':
				price=549.99;
				total+=(price*90/100);
				fout<<"\nPhone\t"<<"Y-Phone Standard\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '6':
				price=649.99;
				total+=(price*90/100);
				fout<<"\nPhone\t"<<"Y-Phone Deluxes\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			default:
			cout<<"Wrong Choice\n"
			"Enter Again"<<endl;
				Discountcal();
		}
}
void tablet()
{
	cout<<"Index\tCategory\tItem Code\tDescription\t\t\t\t\t\tPrice($)\n"
		"1:\tTablet\t\tRTMS\t\tRobotab-8-inch screen and 64 GB memory\t\t\t\t\t149.99\n"
		"2:\tTablet\t\tRTLM\t\tRobotab-10-inch screen and 128 GB memory\t\t\t\t299.99\n"
		"3:\tTablet\t\tYTLM\t\tY-Tab Standard-10-inch screen and 128 GB memory\t\t\t\t499.99\n"
		"4:\tTablet\t\tYTLL\t\tY-Tab Deluxe-10-inch screen and 256 GB memory\t\t\t\t599.99\n"
		"\nKindly select respective index"<<endl;
}
void tcal()
{
	tablet();
	choice=getche();
		system("cls");
		switch(choice)
		{
			case '1':
				price=149.99;
				total+=price;
				fout<<"\nTablet\t"<<"RoboTab\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '2':
				price=299.99;
				total+=price;
				fout<<"\nTablet\t"<<"RoboTab\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '3':
				price=499.99;
				total+=price;
				fout<<"\nTablet\t"<<"Y-Tab Standard\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '4':
				price=599.99;
				total+=price;
				fout<<"\nTablet\t"<<"Y-Tab Deluxe\t"<<price<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			default:
			cout<<"Wrong Choice\n"
			"Enter Again"<<endl;
				tcal();
		}
	
}
void Discounttcal()
{
	tablet();
	choice=getche();
		system("cls");
		switch(choice)
		{
			case '1':
				price=149.99;
				total+=(price*90/100);
				fout<<"\nTablet\t"<<"RoboTab\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '2':
				price=299.99;
				total+=(price*90/100);
				fout<<"\nTablet\t"<<"RoboTab\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '3':
				price=499.99;
				total+=(price*90/100);
				fout<<"\nTablet\t"<<"Y-Tab Standard\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			case '4':
				price=599.99;
				total+=(price*90/100);
				fout<<"\nTablet\t"<<"Y-Tab Deluxe\t"<<(price*90/100)<<endl;
				cout<<"\nYour current bill is:"<<total<<"$"<<endl;
				break;
			default:
			cout<<"Wrong Choice\n"
			"Enter Again"<<endl;
				Discounttcal();
		}
	
}
int main()
{
	fout<<"\nCategory\tDescription\tPrice($)\n"<<endl;
	menu:
	cout<<"You want to Perchase\n"
	"\t1:Phone\n"
	"\t2:Tablet\n"
	"Select respective index:"<<endl;
	choice=getche();
	system("cls");
	if(choice=='1')
	{
		pcal();
		sim();
		Cases();
		charger();	
	}
	else if(choice=='2')
	{
		tcal();
		sim();
		Cases();
		charger();
	}
	else 
	{
		cout<<"Wrong Choice\n"
		"Enter Again"<<endl;
		goto menu;	
	}
	Menue:
	cout<<"Do you want to perchase another\n"
	"1:\tPhone\n"
	"2:\tTablet\n"
	"3:\tTo exit the Program\n"
	"Select relative index"<<endl;
	choice=getche();
	system("cls");
	if(choice=='1')
	{
		pcal();
		sim();
		Cases();
		charger();	
	}
	else if(choice=='2')
	{
		tcal();
		sim();
		Cases();
		charger();
	}
	else if(choice=='3')
	{
		exit;
	}
	else 
	{
		cout<<"Wrong Choice\n"
		"Enter Again"<<endl;
		goto Menue;	
	}
	cout<<"Now you can get 10% discount on perchase of every phone or tablet\n"
	"Press\n1:Get Discount\n"
	"2:Discard Program"<<endl;
	choice=getche();
	system("cls");
	if(choice=='1')
	{
		Discount:
	cout<<"Do you want to perchase another\n"
	"1:\tPhone\n"
	"2:\tTablet\n"
	"3:\tTo exit the Program\n"
	"Select relative index"<<endl;
	choice=getche();
	system("cls");
	if(choice=='1')
	{
		Discountcal();
		sim();
		Cases();
		charger();	
	}
	else if(choice=='2')
	{
		Discounttcal();
		sim();
		Cases();
		charger();
	}
	else if(choice=='3')
	{
		exit;
	}
	else 
	{
		cout<<"Wrong Choice\n"
		"Enter Again"<<endl;
		goto Discount;	
	}
	}
	cout<<"Press\n" 
	"\t1:\tbuy another phone on 10% discount\n"
	"\t\t\tOR \n"
	"Press any key to Exit"<<endl;
	choice=getche();
	system("cls");
	if(choice=='1')
	{
		goto Discount;
	}
	else
	{
		exit;
	}	
	ifstream fin("BILL.txt");
	string Record;
	while(getline(fin,Record))
	{
		cout<<Record;
		cout<<endl;
	}
	return 0;
}