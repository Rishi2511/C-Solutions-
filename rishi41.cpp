#include<iostream>
#include<string>

using namespace std;
class laptop
{
	public:
	string name;
	float price;

	laptop()
	{
		name = "Mac";
		price =100.0;
		{
		cout<<"Name = "<<name<<endl<<"Price = "<<price<<endl;

	}

	}
	
	



};

int main()

{
	laptop lap;
	
	return 0;
}