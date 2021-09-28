#include<iostream>
#include<list>
using namespace std;


void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
          cout<<*it<<" ";
    }
    cout<<endl;
}


int main(){
     
    list<int> list1;
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(9);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(6);
    
    display(list1);
     

    list<int> list2(3);
    list<int> :: iterator itr=list2.begin();
    *itr=45;
    itr++;
    *itr=6;
    itr++;
    *itr=9;
    *itr++;
    display(list2);

    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"list1 after sorting and merging : ";
    display(list1);
    // cout<<*itr;
return 0;
}





