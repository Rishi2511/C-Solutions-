#include<iostream>

using namespace std;
 int main()
 {
 	int arr[]={5,4,1,3,2};
 	int size=5;
 	int minindex;
 	int temp;
 	cout<<"Unsorted array is : ";
 	for(int i=0;i<size;i++)
 		cout<<arr[i]<<" ";
 	{
 	for(int i=0;i<size-1;i++)

 	{
 		minindex =i;
 			
 		for(int j=i+1;j<size;j++)
 		{
 			
 				if(arr[minindex]>arr[i])
 					minindex = j;
 			}
 			temp=arr[minindex];
 			arr[minindex]=arr[i];
 			arr[i]=temp;
 			
 	}
 	cout<<"\nSorted array is : ";
 	for(int i=0;i<size;i++)
 	cout<<arr[i]<<" ";   
 	cout<<endl;    
 	}                                          
 	return 0;
 } 	
 	


 











