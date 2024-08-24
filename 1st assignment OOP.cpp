#include<iostream>
#include<cstring>
using namespace std;
class marks_sheet{
	private:
		string student_name;
		string degree;
		int year,marks,semester;
		float percentage,cgpa;
		string grade;
		int n;
	public:
		marks_sheet(){
			cout<<"Default constructor called"<<endl;
			student_name="N/A";
			degree="N/A";
			year=marks=semester=0;
			percentage=cgpa=0.0;
			grade="N/A";
			n=0;
		}
		marks_sheet(string S_name, string Deg, int Year, int Marks, float Percentage, string Grade){
			cout<<"Constructor 1 called"<<endl;
			student_name=S_name;
			degree=Deg;
			year=Year;
			marks=Marks;
			percentage=Percentage;
			grade=Grade;
			n=1;
		}
		marks_sheet(string s_name, string D, int Y, int S,float Cgpa){
			cout<<"Constructor 2 called"<<endl;
			student_name=s_name;
			degree=D;
			year=Y;
			semester=S;
			cgpa=Cgpa;
			n=2;
		}
		void display_data()
		{
			{
			if(n==1)
			{
				cout<<"\tStudent Name\t\tDegree\tYear\tMarks\tPercentage(%)\tGrade"<<endl;
				cout<<"\t"<<student_name<<"\t\t"<<degree<<"\t"<<year<<"\t"<<marks<<"\t"<<percentage<<"\t\t"<<grade<<endl;	
			}
			else
			{
				cout<<"\tStudent Name\t\tDegree\tYear\tSemester\tCGPA"<<endl;
				cout<<"\t"<<student_name<<"\t\t"<<degree<<"\t"<<year<<"\t"<<semester<<"\t\t"<<cgpa<<endl;		
			}
			}
		}
		~marks_sheet()
		{
			cout<<"Destructor Called for object "<<n<<"."<<endl;
		}
};
int main()
{
	
//	string student_name,Degree,grade;
//	int year,marks;
//	float Percentage;
//	cout<<"Enter Name:"<<endl;
//	getline(cin,student_name);
//	cout<<"Enter Degree:"<<endl;
//	getline(cin,Degree);
//	cout<<"Enter Year:"<<endl;
//	cin>>year;
//	cout<<"Enter Marks:"<<endl;
//	cin>>marks;
//	cout<<"Enter Percentage:"<<endl;
//	cin>>Percentage;
//	cout<<"Enter Grade:"<<endl;
//	cin>>grade;
//	marks_sheet m1(student_name,Degree,year,marks,Percentage,grade);
		marks_sheet m3;
	{
		marks_sheet m1("Muhammad Ahsan","Matric",2017,1004,91.27,"A+");
		m1.display_data();
		
	}	
	{
		marks_sheet m2("Muhammad Ahsan","BS-SE",2022,2,3.88);
		m2.display_data();
	}
		
	return 0;
}
