#include <iostream>
using namespace std;

void binary_search(int [], int, int, int);
void bubble_sort(int [], int);
 
int main()
{
    int key, size, i; 
    cout<<"Enter the total elements in the array ";
    cin>>size;
    int list[size];
    cout<<"Enter the array elements\n";
    for(i = 0; i < size; i++)
    {
        cin>>list[i];
    }
    bubble_sort(list, size);
    cout<<"\n";
    cout<<"Enter the element to search";
    cin>>key;
    binary_search(list, 0, size, key);
    return 0;
 
}
 
void bubble_sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}
 
void binary_search(int list[], int lo, int hi, int key)
{
    int mid;
 
    if (lo > hi)
    {
        cout<<"Element not found";
        return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
        cout<<"Element found at position:"<<mid+1;
    }
    else if (list[mid] > key)
    {
        binary_search(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        binary_search(list, mid + 1, hi, key);
    }
}
