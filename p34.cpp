#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);

};
void student :: set_roll_number(int r)
{
    roll_number=r;
}
void student :: get_roll_number()
{
    cout<<"roll number is "<<roll_number<<endl;
}
class exam : public student{

    protected:
    float maths;
    float phy;

    public:
    void set_marks(float,float);
    void get_marks(void);
};

void exam:: set_marks(float m1,float m2)
{
     maths=m1;
     phy=m2;
}

void exam :: get_marks()
{
    cout << "marks obtained in maths are " <<maths<<endl;
    cout  << "marks obtained in phy are " <<phy<<endl;
}

class results:public exam{
float percentage;
public:
void display_results(){
    get_roll_number();
    get_marks();
    cout<<"your percentage is "<<(maths+phy)/2<<endl;
}

};


int main(){
results rishi;
rishi.set_roll_number(69);
rishi.set_marks(91,90);

rishi.display_results();

return 0;
}