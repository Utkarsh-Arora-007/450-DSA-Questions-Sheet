//Methodology
//Initialize start and end indexes as start = 0, end = n-1 
//Swap arr[start] with arr[end] 
//Recursively call reverse for rest of the array
//Time Complexity:O(n)

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end)
{
    if(start>=end)
    return;

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    //Recursive Calling Function

    reverseArray(arr,start+1,end-1);

}

//Funtion to Print the Array
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

}

int main()
{
    int arr[]={ 1,2,3,4,5,6};

    //To print original array
    printArray(arr,6);

    // Function calling
    reverseArray(arr,0,5);
    cout<<"Reversed array is"<<endl;

    printArray(arr,6);

    return 0;
    
}
