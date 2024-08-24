#include<iostream>
#include<cstring>	
using namespace std;
class room{
	private:
	float length;
	float width;
	float height;
	public:
	float area(float l,float w)
	{
		length=l;
		width=w;
		return l*w;
	}
	float volume(float l,float w,float h)
	{
		length=l;
		width=w;
		height=h;
		return l*w*h;
	}
};
int main()
{
	room r;
	float a,v,L,W,H;
	
	cout<<"Enter Length:"<<endl;
	cin>>L;
	cout<<"\nEnter Width:"<<endl;
	cin>>W;
	cout<<"\nEnter Height:"<<endl;
	cin>>H;
	system("pause");
	system("cls");
	a=r.area(L,W);
	cout<<"Area is:"<<a<<endl;
	v=r.volume(L,W,H);
	cout<<"Volume is:"<<v<<endl;
	return 0;
}