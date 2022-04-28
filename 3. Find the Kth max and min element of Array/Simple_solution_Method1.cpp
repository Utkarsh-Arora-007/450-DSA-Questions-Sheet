//A simple solution is to sort the given array using an O(N log N) sorting algorithm like Merge Sort, Heap Sort, etc, and return the element at index k-1 in the sorted array. 
//Time Complexity of this solution is O(N Log N) 

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[],int n,int k)
{
    //Sort the given array
    sort(arr,arr+n);

    //Return Kth element in the sorted array
    return arr[k-1];

}

//Driver Program to test above methods

int main()
{
    int arr[]={ 12, 3,5,7,19};
    int n= sizeof(arr) / sizeof(arr[0]),k=2;
    cout<<"K'th smallest element is "<<kthSmallest(arr,n,k);
    return 0;

}
