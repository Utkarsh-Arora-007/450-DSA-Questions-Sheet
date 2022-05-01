//Recursive Implementation

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int l,int r, int x)
{

    if(r>=1)
    {
        int mid=1+(r-1)/2;

        //If the element is present at the middle itself
        if(arr[mid]==x)
          return mid;

        //If an element is smaller than mid, then 
        //it can only be present in lefty subarray.

        if(arr[mid]>x)
          return binarySearch(arr,l,mid-1,x);

          //Else the element can only be present
          //in right subarray

          return binarySearch(arr,mid+1,r,x);


    }

    //We reach here when element is not
    //present in array.

    return -1;

}


int main(void)
{
    int arr[]={2,3,4,10,40};
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=binarySearch(arr,0,n-1,x);
    (result==-1)
    ? cout<<"Element is not present in the array"
    :cout<<"Element is present at index"<<result;

    return 0;

}