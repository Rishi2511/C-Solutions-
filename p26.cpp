#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

class distance{
    int a,b;

    friend void dist(d ,d );
    public:
    void  setdata(int x,int y){
        a=x;
        b=y;
    }
    void getdata()
    {
        cout<<" the pair is "<<a<<","<<b;
    }
};

void dist((int d o1),(int d o2)){
    int x_dis=pow(o1.a-o2.a,2);
    int y_dis=pow(o1.b-o2.b,2);
    void res =sqrt(x_dis+y_dis);
    return res;
}

int main(){
distance p1(1,2),p2(3,4),ans;
p1.getdata();
p2.getdata();
ans=dist(p1,p2);
ans.getdata();
   

return 0;
}