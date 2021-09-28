#include<iostream>
#include<string>

using namespace std;



class laptop
{
public:
	laptop()
	{
		cout<<"Base class 2 called "<<endl;
	}
	string name;
	float price;
	

};
class gaminglaptop :public laptop
{
public:
	gaminglaptop()
	{
		cout<<"Derived class 1 called "<<endl;
	}
	string name;
	int vram;
};
class gamingsystem:public gaminglaptop
{
	public :
	gamingsystem()
	{
		cout<<" Derived class 2 called "<<endl;
	}
	};



int main()
{
	gamingsystem lap1;

	return 0;
}





