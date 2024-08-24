#include<iostream>
using namespace std;
template<typename A>
class Test
{
	private:
		A x;
		static int count;
	public:
		Test()
		{
			count++;
		}
		int returnCount();
};
template<typename A>
int Test<A>::count=0;
template<typename A>
int Test<A>::returnCount()
	{
		return count;
	}
int main()
{
	Test <int> a; //class Test has 1 template variable 'x' and one static int variable 'count' initialized with 0
    Test <int> b;
    cout<<b.returnCount();

 return 0;
}

