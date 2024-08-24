#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void intro()
{
	cout<<"\nwe have four trains of timing \n9:00\n11:00\n13:00\n15:00"<<endl;
	cout<<"charges \n25$ for go to top of the mountain\n25$for go backdown"<<endl;
	cout<<"\nwe have six coaches in the train and each coach contain eighty seats"<<endl;
	cout<<"\nwe have some discount that if the group member are greater then 9 mean 10 then one last seat free"<<endl;		
}
//total trains 4
//all train seats 480
//last backdown train have 640 seats
int main()
{
	char coaches,m;
	int s=48,price=0,fee=50,t=0;
	char a,choice,b;
	cout<<"\ndo u want to go to the top of the mountain"<<endl;
	cin>>a;
	if(a=='y');
	{
		cout<<"\nwe have four trains of timing \n1. 9:00\n2. 11:00\n3. 13:00\n4. 15:00"<<endl;
	    cout<<"\nin which train do u want to travel";
	    cin>>choice;
	    switch (choice)
	    {
	    	case '1':
	    		{
	    		coaches:
	    		
	            cout<<"\nwe have total six coaches in one train in which coache do u want to travel"<<endl;
				cin>>coaches;
				switch (coaches)
				{
					case '1':
						{
						cout<<"\nplz enter how many member want to travel"<<endl;
	    		        cin>>m;
	    		        s-=m;
	    		        cout<<s;
	    		        if(t<48)
	    		        {
	    		            if(m>0&&m<=9)
					      {
						for(int i=0;i<10;i++)
					    {
					    	price+=fee;
						}			
					      }
	    		        else if (m>9&&m<11)
	    		         {
						for(int i=0;i<=9;i++)
					    {
					    	price+=fee;
						}			
					}
					else if(m>19&&m<21)
					{
						for(int i=0;i<=18;i++)
					    {
					    	price+=fee;
						}			
					}	
					else if(m>29&&m<31)
					{
						for(int i=0;i<=27;i++)
					    {
					    	price+=fee;
						}			
					}
					else if(m>39&&m<41)
					{
						for(int i=0;i<36;i++)
					    {
					    	price+=fee;
						}			
					}	             
					else if(m>49&&m<51)
					{
						for(int i=0;i<45;i++)
					    {
					    	price+=fee;
						}			
					}else if(m>59&&m<61)
					{
						for(int i=0;i<54;i++)
					    {
					    	price+=fee;
						}			
					}else if(m>69&&m<71)
					{
						for(int i=0;i<63;i++)
					    {
					    	price+=fee;
						}			
					}
					else if(m>79&&m<81)
					{
						for(int i=0;i<72;i++)
					    {
					    	price+=fee;
						}			
					}
					else 
					{
						cout<<"\ngood";
					}
				}
	    		        else if(t==480)
	    		          {
	    		        	cout<<"\nout of seats";
						cout<<"\nplz choose another coache do u want to choose"<<endl;
						cin>>b;
						if(b=='y')
						{
							goto coaches;
						}
						else
						{
							abort();
						}
						
						}
						else
						{
							cout<<"bye";
					}
	    		        
	    		      }
					break;
				default:
				cout<<"thanku";
				break;	
				}
				break;
				  }  		
		}
    }
return 0;
}	
