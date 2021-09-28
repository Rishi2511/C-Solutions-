#include<iostream>
#include<climits>


using namespace std;

int main()
{  
	//converting to lower case
	string s="ASDFGHRPFY";
	//cout<<'A'-'a';
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		{
			s[i]+=32;
		}
	}
	cout<<s<<endl;
	return 0;

	
	}