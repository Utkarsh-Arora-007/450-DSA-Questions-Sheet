// Methodology

// 1) Initialize start and end indexes as start = 0, end = n-1 
//2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
// start = start +1, end = end – 1

// Time Complexity: O(n)


#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    //print the original array

    reverseArray(arr,0,n-1);
    cout<<"Reversed array is"<<endl;

    printArray(arr,n);

    return 0;
}

