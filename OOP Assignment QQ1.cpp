#include<iostream>
using namespace std;
class Mammels
{
	public:
	void Show()
	{
		cout<<"I am Mammel"<<endl;	
	}	
};
class MarineAnimal
{
	public:
	void Show()
	{
		cout<<"I am MarineAnimal"<<endl;	
	}	
};
class BlueWhale : public Mammels,MarineAnimal
{
	public:
	void Show()
	{
		Mammels :: Show();
		MarineAnimal :: Show();
		cout<<"I am BlueWhale"<<endl;	
	}	
};
int main()
{
	Mammels M;
	M.Show();
	MarineAnimal MM;
	MM.Show();
	BlueWhale BW;
	BW.Show();

 return 0;
}
