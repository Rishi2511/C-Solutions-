#include<iostream>
#include<vector>
#include<sstream>
#include<string>


using namespace std;

int main()
{
    string str="i am rishi";
    stringstream str_stm(str);
    string temp;

    vector<string> words;

    while(str_stm>>temp)
    {
        words.push_back(temp);
    }

    for(int i=0;i<words.size();i++)
    {
        cout<<words[i]<<endl;
    }
    
}
