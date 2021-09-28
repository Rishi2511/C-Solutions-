#include<iostream>
using namespace std;
int main()
{
	char button ;
	cin>>button;

	switch(button)
	{
		case 'a':
		cout<<"hi"<<endl;
		break;
		case 'b':
		cout<<"hey"<<endl;
		break;
		case 'c':
		cout<<"hello"<<endl;
		break;
			default:
			cout<<" i am still learning "<<endl;
		}
	return 0;
}