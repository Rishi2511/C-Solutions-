#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no=a;
    }
    void print_number(void)
    {
        cout<<"your roll number is "<<roll_no<<endl;
    }

};

 class test: virtual public student{
     protected:
     float maths,phy;
     public:
     void set_marks(float m1,float m2)
     {
         maths=m1;
         phy=m2;
     }

     void print_marks(void)
     {
         cout<<"your result is here:  "<<endl
             <<"maths: "<<maths<<endl
             <<"physics: "<<phy<<endl;
     }
 };

 class sports:virtual public student{
     protected:
     float score;
     public:
     void set_score(float sc)
     {
         score=sc;
     }
     void print_score(void){
      cout<<"your pt score is "<<score<<endl;
     }
 };

 class result : public test,public sports{
 private:
  float total;
  public:
  void display(void)
  {
      total=maths+phy+score;
      print_number();
      print_marks();
      print_score();
      cout<<"your total score is: "<<total<<endl;
  }

 };


int main(){
  
  result rishi;
  rishi.set_number(4200);
  rishi.set_marks(80,50);
  rishi.set_score(9);
  rishi.display();

return 0;
}
