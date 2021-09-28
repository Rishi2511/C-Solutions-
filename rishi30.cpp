#include<iostream>

using namespace std;

float division(float dividend, float divisor)
{
	float ans=dividend/divisor;
	return ans;



}
int main()
{
	float dividend, divisor;
	
	cout<<"enter dividend :";
	cin>>dividend;
	cout<<"enter divisor :";
	cin>>divisor;
	cout<<dividend<<"/"<<divisor<<"="<<division(dividend,divisor)<<endl;
	return 0;

}