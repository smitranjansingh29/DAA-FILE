#include<iostream>
using namespace std;  
int temp;  
  
void heapify(int arr[], int size, int i)  
{  
	int largest = i;    
	int left = 2*i + 1;    
	int right = 2*i + 2;    
	
	if (left < size && arr[left] >arr[largest])  
	{
		largest = left;  
	}
	if (right < size && arr[right] > arr[largest])  
	{
		largest = right;  
	}
	if (largest != i)  
	{  
		temp = arr[i];  
		arr[i]= arr[largest];   
		arr[largest] = temp;  
		heapify(arr, size, largest);  
	}  
}  
  
void heapSort(int arr[], int size)  
{  
	int i;  
	for (i = size / 2 - 1; i >= 0; i--)  
	{
		heapify(arr, size, i);
	}  
	for (i=size-1; i>=0; i--)  
	{
		temp = arr[0];  
		arr[0]= arr[i];   
		arr[i] = temp;  
		heapify(arr, i, 0);  
	}  
}  
  
int main()  
{
	int arr[100],i,size; 
	cout<<"enter the Size Of Array :\n";
	cin>>size;
	cout<<"Enter the Array : \n";
	for(i=0;i<size;i++)
	{
	   scanf("%d",&arr[i]);
	}
  
	heapSort(arr, size);    
	cout<<"printing sorted elements\n"; 
	for (i=0; i<size; ++i)  
	cout<<arr[i];
	return 0;  
}
