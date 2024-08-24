#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class student{
	private :
		string name;
		string arid_no;
		string address;
		string cell_no;
		public :
			void set_name( string n)
			{
				name=n;
			}
			void set_arid_no(string a)
			{
				arid_no=a;
			}
			void set_address( string ad)
			{
				address=ad;
			}
			void set_cell_no(string c)
			{
				cell_no=c;
			}
			void display_name()
			{
				cout<<" student name "<<name <<endl;
			}
			void display_arid_no()
			{
				cout<<" student arid_number"<<arid_no<<endl;
			
			}
			void display_address()
			{
				cout<<" student address"<<address<<endl;
			
			}
			void display_cell_no()
			{
				cout<<" student cell no"<<cell_no<<endl;
			}
		};
			int main()
			{
				student s1,s2,s3,s4,s5;
				s1.set_name("ABC");
				s1.display_name();
				s1.set_arid_no( "21-ARID-767");
			    s1.display_arid_no();
				s1.set_address("rawalpindi");
				s1.display_address();
				s1.set_cell_no("0333456767");
				s1.display_cell_no();
				s1.display_name();
				s2.set_name("EFG");
				s2.display_name();
				s2.set_arid_no( "21-ARID-762");
			    s2.display_arid_no();
				s2.set_address("lahore");
				s2.display_address();
				s2.set_cell_no("033433478");
				s2.display_cell_no();
				s2.display_name();
				s3.set_name("JKL");
				s3.display_name();
				s3.set_arid_no( "21-ARID-769");
			    s3.display_arid_no();
				s3.set_address("karachi");
				s3.display_address();
				s3.set_cell_no("033409678");
				s3.display_cell_no();
				s3.display_name();
				s4.set_name("RST");
				s4.display_name();
				s4.set_arid_no("21-ARID-760");
			    s4.display_arid_no();
				s4.set_address("quetta");
				s4.display_address();
				s4.set_cell_no("0334098768");
				s4.display_cell_no();
				s4.display_name();
				s5.set_name("XYZ");
				s5.display_name();
			    s5.set_arid_no("21-ARID-769");
			    s5.display_arid_no();
				s5.set_address("karachi");
				s5.display_address();
				s5.set_cell_no("033466678");
				s5.display_cell_no();
				s5.display_name();
				return 0;
				
			}