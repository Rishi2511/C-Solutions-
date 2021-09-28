#include<iostream>
#include<fstream>
using namespace std;

int main(){
//opening file using constructor

// string st = "rishi bhai";
// ofstream out("p49.txt");//write operation
// out<<st;
    
string st2;
ifstream in("p49-b.txt");//read opretion
// in>>st2;//isne read kar liya
getline(in,st2);
cout<<st2;//isne jo read kiya vo output karega

return 0;
}