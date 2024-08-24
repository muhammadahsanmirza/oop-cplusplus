#include<iostream>
using namespace std;
class Student{
	private:
	string Name;
	string Arid_No;
	int semester;
	float cgpa;
	public:
		// Constructor
		Student()
		{
			//Default Constructor
			cout<<"Default Constructor Called"<<endl;
			Name="N/A";
			Arid_No="N/A";
			semester=0;
			cgpa=0.0;	
		}
		Student(string N, string A, int s, float c)
		{
			
			Name=N;
			Arid_No=A;
			semester=s;
			cgpa=c;
		}
	void Get(string N, string A, int s, float c)
	{
		Name=N;
		Arid_No=A;
		semester=s;
		cgpa=c;	
	}
	void get()
	{
		cout<<"Enter Name"<<endl;
		cin>>Name;
		cout<<"Enter Arid No"<<endl;
		cin>>Arid_No;
		cout<<"Enter Current Semester"<<endl;
		cin>>semester;
		cout<<"Enter GPA/CGPA"<<endl;
		cin>>cgpa;
	}
	void Show()
	{
		cout<<Name<<endl<<Arid_No<<endl<<semester<<endl<<cgpa<<endl;
	}
};
int main()
{
//	string name,aridno;
//	int sem;
//	float CGPA;
	Student S;
//	cout<<"Enter Name"<<endl;
//	cin>>name;
//	cout<<"Enter Arid No"<<endl;
//	cin>>aridno;
//	cout<<"Enter Current Semester"<<endl;
//	cin>>sem;0
//	cout<<"Enter GPA/CGPA"<<endl;
//	cin>>CGPA;
//	S.get(name,aridno,sem,CGPA);
	S.get();
	cout<<endl;
	S.Show();
 return 0;
}
