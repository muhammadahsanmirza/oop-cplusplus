#include<iostream>
using namespace std;
class Student
{
	private:
		string Name;
		string Arid_No;
	public:
		Student()
		{
			cout<<"Default Constructor Called"<<endl;
			Name="N/A";
			Arid_No="N/A";
		}
		Student(string Name, string Arid_No)
		{
			cout<<"Parametrized Constructor called"<<endl;
			this->Name=Name;
			this->Arid_No=Arid_No;
		}
		Student(Student &A)
		{
			cout<<"Copy Constructor Called"<<endl;
			Name=A.Name;
			Arid_No=A.Arid_No;
		}
		void Display()
		{
			cout<<"Name:\t"<<this ->Name<<endl;
			cout<<"Arid No:\t"<<this->Arid_No<<endl;
		}	
};
int main()
{
	Student S1;
	Student S2("Hassan","717");
	S2.Display();
	Student S3(S2);
	Student S3;
	S3=S2;
	Student S3=S2;
	S3.Display();
	return 0;
}
