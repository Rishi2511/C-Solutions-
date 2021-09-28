#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r)
    {
       title=s;
       rating = r;                                                                             
       
    }
    
    virtual void display()
    {

    }
    };
    class CWHvideo : public CWH
    {
     float videolength;
     public:
     CWHvideo(string s,float r,int vl): CWH(s,r)
     {
         videolength=vl;
     }

     void display()
     {
         cout<<"this is an amazing video with title "<<title<<endl;
         cout<<"Ratings "<<rating<<" out of 5* "<<endl;
         cout<<"videolength is "<<videolength<<" minutes"<<endl;
     }
    };
    class CWHtext : public CWH
    {
     int words;
     public:
     CWHtext(string s,float r,int wc): CWH(s,r)
     {
         words=wc;
     }
     void display()
     {
         cout<<" this is an amazing video with title "<<title<<endl;
         cout<<" Ratings "<<rating<<" out of 5* "<<endl;
         cout<<" words in this video is "<<words<<endl;
     }
    };
    
int main(){

string title;
float rating,vlength;
int words;

//for video
title="jango tutorial";
vlength=4.56;
rating=4.89;
CWHvideo jangovideo(title,rating,vlength); //data same rahega but variables alag alag ho sakte hai  !!
jangovideo.display();

//for text
title="jango tutorial";
words=4.56;
rating=4.89;
CWHtext jangotext(title,rating,words); //data same rahega but variables alag alag ho sakte hai  !!
jangotext.display();

CWH *tuts[2];
tuts[0]=&jangovideo;
tuts[1]=&jangotext;

tuts[0]->display();
tuts[1]->display();


return 0;
}