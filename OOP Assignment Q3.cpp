#include<iostream>
using namespace std;
class Marks
{
	public:
	string S_Name;
	static int Roll_No;
	int P_marks;	
	int C_marks;	
	int M_marks;
	int Average_Marks;
	int Obtained_Marks;
	void get_info()
	{
		cin.ignore();
		cout<<"Enter Student Name"<<endl;
		getline(cin,S_Name);
	}	
};
int Marks::Roll_No=0;
class Physics: public Marks
{
	public:
		void get_Pmarks()
		{
			cout<<"Enter Physics marks"<<endl;
			cin>>P_marks;
		}
	
};
class Chemistry: public Physics
{
	public:
	void get_Cmarks()
		{
			cout<<"Enter Chemistry marks"<<endl;
			cin>>C_marks;
		}
};
class Mathematics: public Chemistry
{
	public:
	void get_Mmarks()
		{
			cout<<"Enter Mathematics marks"<<endl;
			cin>>M_marks;
		}
	void Show_Record()
	{
		cout<<endl;
		cout<<"\tName:\t\t"<<S_Name<<endl;
		Roll_No++;
		cout<<"\tRoll No.\t"<<Roll_No<<endl;
		cout<<"\tPhysics Marks:\t"<<P_marks<<endl;
		cout<<"\tChemistry Marks:"<<C_marks<<endl;
		cout<<"\tMaths Marks:\t"<<M_marks<<endl;
		Obtained_Marks=P_marks+C_marks+M_marks;
		Average_Marks=(Obtained_Marks*100)/300;
		cout<<"\tAverage Marks:\t"<<Average_Marks<<endl;
		
	}
	
};
int main()
{
	int size;
	cout<<"Enter number of students: "<<endl;
	cin>>size;
	Mathematics *M;
	M= new Mathematics[size];
		for(int i=0;i<size;i++)
		{
			M[i]->get_info();
			M->get_Pmarks();
			M->get_Cmarks();
			M->get_Mmarks();
			system("Cls");
		}
		for(int j=0;j<size;j++)
		{
			M->Show_Record();
		}

 return 0;
}
