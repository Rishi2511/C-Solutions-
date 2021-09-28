#include<iostream>

using namespace std;

void change(int no)

{
	no=no*no;
	
	cout<<"Value in function : "<<no<<endl;
	

}



int name()
{
	int n;
	cout<<"Enter value : ";
	cin>>n;
	change(n);
	cout<<"Value in main  :"<<n<<endl;

	return 0;
}
