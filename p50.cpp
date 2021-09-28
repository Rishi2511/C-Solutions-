#include<iostream>
#include<fstream>
using namespace std;

int main(){

ofstream hout("p49.txt");
string name;
cout<<"enter your name = ";
cin>>name;
hout<<name + " is my name " ;
hout.close();

ifstream hin("p49.txt");
string content;
// hin>>content;
getline(hin,content);
cout<<"the content of the file is : "<<content;
hin.close();

return 0;
}




