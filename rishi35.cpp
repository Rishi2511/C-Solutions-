#include<iostream>
#include<string>
using namespace std;
 class laptop
 {
 	string name;
 	string processor;
 	float price;
 	string brand;
 
 void getdata()
 {
 	cin>>name;
 	cin>>processor;
 	cin>>price;
 	cin>>brand;
 }

 void showdata()
 {
 	cout<<name;
 	cout<<processor;
 	cout<<price;
 	cout<<brand;
 }

 void startup
 {
 cout<<"laptop "<<name<<"has started";
}

 void shutdown

{ 
	cout<<"laptop "<<name<<"is shutting down";
}
}

int main()
{
laptop laptop1;
laptop1.getdata()
laptop1.showdata() 
return 0;
}
























