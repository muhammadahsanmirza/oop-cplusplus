#include<iostream>
using namespace std;
class test{
	int a;
	public:
		test()
		{
			a=0;
		}
		test(int b)
		{
			a=b;
		}
		test operator+(test t)
		{
			test w;
			w.a=a+t.a;
			return w;
		}
		void show()
		{
		cout<<a;
		}
};
int main()
{
	test t1,t2(3),t3(5);
	t1=t2+t3;
	t1.show();
	return 0;
}