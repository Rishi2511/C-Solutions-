#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
  //function objects

  int arr[]={9,2,7,4,5};
//   sort(arr,arr+5);
  sort(arr,arr+5,greater<int>());
  for(int i=0;i<5;i++) 
  {
      cout<<arr[i]<<endl;
  }

return 0;
}