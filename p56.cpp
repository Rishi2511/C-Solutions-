#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void display(vector<T> &v)
{
    cout<<"displaying this vector "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
   //ways to create vector
  
   vector<int> vec1;
   vector<char> vec2(4);
   vec2.push_back('c');
   vec2.push_back('d');
   vec2.push_back('e');
   vec2.push_back('r');
   vector<char> vec3(vec2);
   vector<int> vec4(6,3);

  display(vec4);

   int element,size=5;
//    cout<<"enter size "<<endl;
//    cin>>size;

//    for(int i=0;i<size;i++)
//    {
//        cout<<"enter an element to add to this vector ";
//        cin>>element;
//        vec1.push_back(element);  

//    }
//    vec1.pop_back();
  
//   vector<int> :: iterator itr =vec1.begin();
//   vec1.insert(itr+1,2,500);
//   display(vec1);
return 0;
}




