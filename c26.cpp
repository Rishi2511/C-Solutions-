//code me error aa raha hai
#include<iostream>

using namespace std;

void subs(string s,string ans)// ans is a empty string
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return ;
	}
	char ch=s[0];
	string ros=s.substr(1);
	subs(ros,ans);
	subs(ros,ans+ch);
}
int main()
{

	
subs("ABC","")	;
cout<<endl;

 
	return 0;
}