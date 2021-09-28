#include<iostream>
#include<string>

using namespace std;
class laptop
{
public:
	laptop()
	{
		cout<<"Base class called "<<endl;
	}
	string name;
	float price;
	

};
class gaminglaptop :public laptop
{
public:
	gaminglaptop()
	{
		cout<<"Derived class called "<<endl;
	}
	string name;
	int vram;
};



int main()
{
	gaminglaptop lap1;
	return 0;
}