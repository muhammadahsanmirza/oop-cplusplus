#include<iostream>
using namespace std;
class friend2;
class friend1
{
	private:
		string name;
		int age;
	public:
		friend void intro(friend1 ,friend2 );
		friend1(string n,int Age)
		{
			name=n;
			age=Age;
		}
		void display()
		{
			cout<<"Name:\t"<<name<<endl;
			cout<<"Age:\t"<<age<<endl;
		}
};
class friend2
{
	private:
		string address;
		float height;
	public:
		friend2()
		{
			address="Mianwali";
			height=6.2;
		}
		void Display()
		{
			cout<<"Address:\n"<<address<<endl;
			cout<<"Height:\n"<<height<<endl;
		}
		void intro(friend1 A)
		{
			A.name="Ahsan";
			A.age=20;
			A.display();
			B.Display();
		//	cout<<A.name<<endl;
		//	cout<<A.age<<endl;
		}
};
//void intro(friend1 A)
//{
//	A.name="Ahsan";
//	A.age=20;
//	A.display();
////	cout<<A.name<<endl;
////	cout<<A.age<<endl;
//}
int main()
{
	friend1 F("Hassan",20);
	//F.name="Ahsan";
	F.display();
//	intro(F);
	friend2 f;
	f.intro(F);
 return 0;
}

