#include<iostream>
using namespace std;

template<typename T>
class rishi{
    public:
    T data;
    rishi(T a)
    {
        data=a;
    }
     void display();
    // {
    //    cout<<data;
    // }

};
template<typename T>
void rishi<T>::display(){
    cout<<data;
}


int main(){
rishi<int> h(4);
h.display();
    
return 0;
}