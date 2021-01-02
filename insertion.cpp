#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[10],temp;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while (j>0&&a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
        
    }
    cout<<"The Sorted Array is:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}
