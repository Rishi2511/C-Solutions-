#include<iostream>
#include<string>

using namespace std;

class laptop
{
    public:
	void run()
	{
		cout<<"run is running"<<endl;
	}

	void run(int a)
	{
		cout<<"int : "<<a<<" is running ";
	}

};
int main ()
{
	laptop lap;
	lap.run();
	lap.run(5);
	return 0;
}










