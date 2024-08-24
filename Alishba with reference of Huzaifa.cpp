#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
		int marks;
		char grade;
	public:
		void getdata();
		void showdata();
};
        void student:: getdata()
		{
			cout<<"Enter Roll Number: "<<endl;
			cin>>roll_no;
			cout<<"Enter Marks: "<<endl;
			cin>>marks;
			cout<<"Enter Grade: "<<endl;
			cin>>grade;
		}
		void student::showdata()
		{
//			system("cls");
			cout<<"Roll Number : "<<roll_no<<endl;
			cout<<"Marks : "<<marks<<endl;
			cout<<"Grade : "<<grade<<endl;
			
		}
int main()
{
	student s[3];
	for(int i=0;i<3;i++)
	{
		s[i].getdata();
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		s[i].showdata();
		cout<<endl;
	}
	return 0;
}