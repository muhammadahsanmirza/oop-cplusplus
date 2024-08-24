#include<iostream>
using namespace std;
class publication
{
	protected:
		string title;
		float price;
	public:
		virtual void getdata()
		{
		}
		virtual void putdata()
		{
		}
};
class book: public publication
{
	private:
		int page_counter;
	public:
		void getdata()
		{
			cin.ignore();
			cout<<"Enter work title:"<<endl;
			getline(cin,title);
			
			cout<<"Enter work price:"<<endl;
			cin>>price;
			cout<<"Enter no. of pages:"<<endl;
			cin>>page_counter;
		}	
		void putdata()
		{
			cout<<"Work title:\t"<<title<<endl;
			cout<<"Work price:\t"<<price<<endl;
			cout<<"No. of pages:\t"<<page_counter<<endl;
		}
};
class tape: public publication
{
	private:
		float minutes;
	public:
		void getdata()
		{
			cin.ignore();
			cout<<"Enter work title:"<<endl;
			getline(cin,title);
			
			cout<<"Enter work price:"<<endl;
			cin>>price;
			cout<<"Enter Audiocassete Minutes:"<<endl;
			cin>>minutes;
		}	
		void putdata()
		{
			cout<<"Work title:\t\t"<<title<<endl;
			cout<<"Work price:\t\t"<<price<<endl;
			cout<<"Audiocassete Minutes:\t"<<minutes<<endl;
		}
};
int main()
{
	publication *pub[2];
	int Choice,n=0;
	char choice;
	do
	{
		cout<<"Press\n"
			  "1: Enter data of book\n"
			  "2: Enter data of Tape"<<endl;
		cin>>Choice;
		if(Choice==1)
		{
			pub[n]=new book;
			pub[n]->getdata();
		}
		else if(Choice==2)
		{
			pub[n]=new tape;
			pub[n]->getdata();
		}
			n++;
		cout<<"Press 'y' to continue"<<endl;
		cin>>choice;
	}
	while(choice=='y');
	for(int i=0;i<n;i++)
	{
		pub[i]->putdata();
	}
 return 0;
}
