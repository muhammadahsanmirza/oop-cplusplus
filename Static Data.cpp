#include<iostream>
using namespace std;
class Student
{
	private:
	string name;
	static int roll_No;
	public:
		Student()
		{
			name="N/A";
		}
		Student(string S)
		{
			name=S;
			roll_No++;
		}
	void ShowData1()
	{
		cout<<"Name:\t"<<name<<endl;
		cout<<"Roll No:\t"<<roll_No<<endl;
	}
	static void ShowData2()
	{
	//	cout<<"Name:\t"<<name<<endl;
		cout<<"Roll No:\t"<<roll_No<<endl;
	}
		
};
int Student ::roll_No=0;
int main()
{
	Student :: ShowData2();
	Student S1("Ahsan");
	Student :: ShowData2();
	Student S2("Hassan");
	Student :: ShowData2();
	Student S3("Muneeb");
	Student :: ShowData2();
 return 0;
}
 