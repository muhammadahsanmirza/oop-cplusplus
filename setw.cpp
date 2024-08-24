#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=15;
	char b='a';
	float c=3.9;
	string d="Muhammad Ahsan";
	cout<<setw(3)<<a<<endl;
	cout<<setw(2)<<b<<endl;
	cout<<setw(4)<<c<<endl;
	cout<<setw(15)<<d<<endl;
	return 0;
}