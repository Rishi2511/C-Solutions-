#include<iostream>
using namespace std;

template<typename T,typename U>
class weight{
    T kg;
    U gram;
    public:

    void setdata(T x,U y)
    {
     kg =x;
     gram=y;
    }

    T getKGdata()
    {
        return kg;
    }

    U getGRAMdata()
    {
        return gram;
    }    

};
int main(){
 weight <int,float>obj1;
 obj1.setdata(5,5.5f);
 cout<<"value is : "<<obj1.getKGdata()<<endl;   
 cout<<"value is : "<<obj1.getGRAMdata()<<endl;   
 
//  weight <float>obj2;
//  obj2.setdata(5.5f);
//  cout<<"value is : "<<obj2.getdata()<<endl;   

return 0;
}