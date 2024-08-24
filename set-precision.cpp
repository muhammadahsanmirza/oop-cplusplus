// setprecision example
#include <iostream>     
#include <iomanip>      
using namespace std;
int main () {
  double f =3.14159;
  cout<<f<<endl;
  cout <<"Set precision 5 is"<<setprecision(5) << f << '\n';
  cout <<"Set precision 9 is"<<setprecision(9) << f << '\n';
  cout <<fixed<<endl;
  cout <<"Set precision 5 is"<<setprecision(5) << f << '\n';
  cout <<"Set precision 9 is"<<setprecision(9) << f << '\n';
  return 0;
}