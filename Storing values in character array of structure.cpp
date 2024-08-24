#include<iostream>
#include<cstring>
using namespace std;
struct name{
	char n[10];
	int price;
};
int main()
{
	name N;
	strcpy(N.n,"Ahsan");
	cout<<"\n"<<N.n<<endl;
	return 0;
}