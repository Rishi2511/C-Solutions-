#include<iostream>
#include<fstream>
using namespace std;

int main(){
  // ofstream out;
  // out.open("p49.txt");
  // out<<"hey i am harsh ";  
  // out.close();

  ifstream in;
  string st;
  in.open("p49.txt");
  // in>>st;
  while(in.eof()==0)
  {
  getline(in,st);
  cout<<st<<endl;

  }
in.close();


return 0;
}