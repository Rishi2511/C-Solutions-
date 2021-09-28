#include<iostream>                                                                                           

using namespace std;
void selectionsort(int arr[],int size)
{
	for(int i=0;i<size-1;i++)

 	{
 		for(int j=i+1;j<size;j++)
 		{
 			minindex =i;
 			{
 				if(arr[minindex]>arr[i])
 					minindex = j;
 			}
 			temp=arr[minindex];
 			arr[minindex]=arr[i];
 			arr[i]=temp;
 			
 	}

}

 int main()
 
 	int arr[]={5,4,1,3,2};
 	int size=(sizeof(arr)/sizeof(int));
 	int minindex;
 	int temp;
 	cout<<"Unsorted array is : ";
 	for(int i=0;i<size;i++)
 		cout<<arr[i]<<" ";
 	selectionsort(arr,size);
 	
 	cout<<"\nSorted array is : ";
 	for(int i=0;i<size;i++)
 	cout<<arr[i]<<" "; 
 	cout<<endl;





 	                                                 
 	return 0;
 } 		
}

