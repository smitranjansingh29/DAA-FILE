#include <iostream>
using namespace std;

void Bucket_Sort(int array[], int n)
{  
    int i, j;  
    int count[n]; 
    for (i = 0; i < n; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[array[i]]++;
    }
 
    for (i = 0, j = 0; i < n; i++)
    {
        for(; count[i] > 0; (count[i])--)
        {
            array[j++] = i;
        }
    }
}   

int main()
{
    int  i, n; 
    cout<<"Enter the size of array : ";   
    cin>>n; 
    int ar[n];  
    cout<<"Enter the "<<n<<" elements to be sorted:\n"; 
    for (i = 0; i < n; i++)
    {
        cin>>ar[i];
    } 
    cout<<"\nThe array of elements before sorting : \n";
    for (i = 0; i < n; i++)
    {
        cout<<ar[i]<<",";
    }  
     
    Bucket_Sort(ar,n);
    
    cout<<"\nThe array of elements after sorting : \n"; 
    for (i = 0; i < n; i++)
    {
        cout<<ar[i]<<",";
    } 
    printf("\n");     
    return 0;
}
