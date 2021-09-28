#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    void displayPoint()
    {
        cout<<"the points are "<<x<<" "<<y<<endl;
    }
};

int main(){
   point p(1,1);
   p.displayPoint();

   point q(2,2);
   q.displayPoint();

    
return 0;
}                    