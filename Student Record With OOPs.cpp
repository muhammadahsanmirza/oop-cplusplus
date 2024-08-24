#include<iostream>
#include<cstring>
using namespace std;
class BSSE_2B{
	private:
		string Name, Arid_No;
		int S1,S2,S3,S4;
		int Obtained_marks;
	public:
		float Percentage;
		BSSE_2B()
		{
			cout<<"Enter Name:"<<endl;
			getline(cin,Name);
			cout<<"Enter Arid_No:"<<endl;
			getline(cin,Arid_No);
			s1:
			cout<<"Enter OOPs marks:"<<endl;
			cin>>S1;
			if(S1<0 || S1>80)
			{
				cout<<"Invalid Marks\n"
					  "Enter Again"<<endl;
				goto s1;	
			}
			else
			{
			s2:
			cout<<"Enter Discrete Math marks:"<<endl;
			cin>>S2;
				if(S2<0 || S2>60)
				{
					cout<<"Invalid Marks\n"
						  "Enter Again"<<endl;
					goto s2;				
				}
				else
				{
					s3:
					cout<<"Enter Software Engineering marks"<<endl;
					cin>>S3;
					if(S3<0 || S3>60)
					{
					cout<<"Invalid Marks\n"
						  "Enter Again"<<endl;
					goto s3;				
					}
					else
					{
						s4:
						cout<<"Enter Financial Accounting marks"<<endl;
						cin>>S4;	
						if(S3<0 || S3>60)
						{
							cout<<"Invalid Marks\n"
						  		  "Enter Again"<<endl;
							goto s4;				
						}
					}
				}
			
			}
			Obtained_marks=S1+S2+S3+S4;
			Percentage=(Obtained_marks*100 )/260;
			cin.ignore();
				system("cls");
		}
		void ShowRecord()
		{
			cout<<"Name:\t\t"<<Name<<endl;
			cout<<"Arid Number:\t"<<Arid_No<<endl;
			cout<<"\t\tSubject\t\t\t\tMarks"<<endl;
			cout<<"\t\tOOPs\t\t\t\t"<<S1<<endl;
			cout<<"\t\tDiscrete Math\t\t\t"<<S2<<endl;
			cout<<"\t\tSoftware Engineering\t\t"<<S3<<endl;
			cout<<"\t\tFinancial Accounting\t\t"<<S4<<endl;
			cout<<"\t\tObtained Marks\t\t\t"<<Obtained_marks<<endl;
			cout<<"\t\tPercentage\t\t\t"<<Percentage<<"%"<<endl;
		}
};
int main()
{
	BSSE_2B Students[2];
	for(int i=0;i<2;i++)
	{
		Students[i].ShowRecord();
		cout<<"\n_________________________________________________________________________________"<<endl;
	}
//	int max;
//	for(int i=0;i<57;i++)
//	{
//		max=i;
//		for(int j=i+1;j<2;j++)
//		{
//			if(Students[j].Percentage<Students[max].Percentage)
//			{
//				max=j;
//			}
//		}
//		if(max!=i)
//		{
//			swap(Students[i].Percentage,Students[max].Percentage);
//		}
//	}
//	for(int i=0;i<2;i++)
//	{
//		Students[i].ShowRecord();
//		cout<<"\n_________________________________________________________________________________"<<endl;
//	}
 return 0;
}
