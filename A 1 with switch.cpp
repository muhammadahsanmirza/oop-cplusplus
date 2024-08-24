#include<iostream>
#include<cstring>
using namespace std;
class marks_sheet{
	private:
		string student_name;
		string degree;
		int year;
		int marks;
		int semester;
		float percentage;
		float cgpa;
		string grade;
		int n;
	public:
			marks_sheet(){
			cout<<"Default constructor called"<<endl;
			student_name="N/A";
			degree="N/A";
			year=0;
			marks=0;
			semester=0;
			percentage=0;
			cgpa=0.0;
			grade="N/A";
			n=0;
		}		
		marks_sheet(string S_name, string Deg, int Year, int Marks, float Percentage, string Grade,int N){
			cout<<"Constructor 1 called"<<endl;
			student_name=S_name;
			degree=Deg;
			year=Year;
			marks=Marks;
			percentage=Percentage;
			grade=Grade;
			n=N;
			
		}
		marks_sheet(string s_name, string D, int Y,int S, float Cgpa, int N){
			cout<<"Constructor 2 called"<<endl;
			student_name=s_name;
			degree=D;
			year=Y;
			semester=S;
			cgpa=Cgpa;
			n=N;
		}
		void display_data()
		{
		  switch(n)  
		  {
		  	case 1:
     	        cout<<"\tStudent Name\t\tDegree\tYear\tGrade\tMarks\tPercentage"<<endl;
     	        cout<<"\t"<<student_name<<"\t\t"<<degree<<"\t"<<year<<"\t"<<grade<<"\t"<<marks<<"\t"<<percentage<<endl;
     	       	break;
		    case 2:
		        cout<<"\tStudent Name\t\tDegree\tYear\tSemester   CGPA"<<endl;
     	        cout<<"\t"<<student_name<<"\t\t"<<degree<<"\t"<<year<<"\t  "<<semester<<"\t   "<<cgpa<<endl;
     	        break;
     	    default:
     	    	cout<<"Invalid Entry"<<endl;
		  }		
		}
		~marks_sheet()
		{
			cout<<"Destructor called for object "<<n<<"."<<endl;
		}
};
int main()
{
		marks_sheet m0;
	{
 		marks_sheet m1("Muhammad Ahsan","Matric",2017,1004,91.27,"A+",1);
 		m1.display_data();
		
 	}	
	{
		marks_sheet m2("Muhammad Ahsan","BS-SE",2022,2,3.88,2);
		m2.display_data();
	}	
	return 0;
}