#include<iostream>
using namespace std;
int main()
{
	int pocetmoney=3000;
	for(int i=1;i<=30;i++)
	{
     if(i%2==0){
     	continue;
 }
 if(pocetmoney==0){
 	break;
 }
 cout<<"go out today "<<endl;
 pocetmoney=pocetmoney-300;
}
	return 0;

} 