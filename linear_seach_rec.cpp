#include <iostream>
using namespace std;
int RecursiveLS(int ar[], int value, int index, int n)
{
    int pos = 0;
 
    if(index >= n)
    {
        return 0;
    }
 
    else if (ar[index] == value)
    {
        pos = index + 1;
        return pos;
    }
 
    else
    {
        return RecursiveLS(ar, value, index+1, n);
    }
    return pos;
}
 
int main()
{
    int n, value, pos, m = 0;
    cout<<"Enter the total elements in the array  ";
    cin>>n;
    int ar[n];
    cout<<"Enter the array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
 
    cout<<"Enter the element to search  ";
    cin>>value;
 
    pos =  RecursiveLS(ar, value, 0, n);
    if (pos != 0)
    {
        cout<<"Element found at position %d ", pos;
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}
