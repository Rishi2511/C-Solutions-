#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    
    map<string,int> marksMap;
    marksMap["harry"]=98;
    marksMap["rishi"]=96;
    marksMap["rohan"]=95;
    marksMap.insert({{"rakul",99},{"sabal",44}});

    
    map<string,int> :: iterator itr;
    for(itr=marksMap.begin();itr!=marksMap.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl; //.first will access the name and 
                                                      // .second will access value
    }

return 0;
}