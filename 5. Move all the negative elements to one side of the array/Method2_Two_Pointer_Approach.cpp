//The idea is to solve this problem with constant space and linear time is by using 
//a two-pointer or two-variable approach where 
//we simply take two variables like left and right which hold the 0 and N-1 indexes.

//Check If the left and right pointer elements are negative then simply increment the left pointer.
//Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and simultaneously increment and decrement the left and right pointers.
//Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
//Repeat the above 3 steps until the left pointer ≤ right pointer.

#include<bits/stdc++.h>
using namespace std;

void shiftall(int arr[],int left,int right)
{
    //Loop to itreate all the negative elements on left side.

    while(left<=right){

    if (arr[left] <0 && arr[right]< 0)
    left+=1;

    //Condition to check if the left pointer element is positive and the right pointer is negative.
    else if(arr[left]>0 && arr[right]<0)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left+=1;
        right-=1;
    }

    //Condition to check if both the elements are positive
    else if(arr[left]>0 && arr[right] >0)
        right-=1;

    else{
        left+=1;
        right-=1;

        }    

    }
}



//function to print the array
void display(int arr[],int right)
{

    for(int i=0;i<=right;++i){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

//Driver Code
int main()
{
    int arr[]={-12,11,-13,-5,6,-7,5,-3,11};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    //Function Call
    shiftall(arr,0,arr_size-1);
    display(arr,arr_size-1);
    return 0;
}