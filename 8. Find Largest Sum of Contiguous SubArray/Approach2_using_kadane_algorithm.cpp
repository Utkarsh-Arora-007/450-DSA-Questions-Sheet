//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[],int size)
{
    int max_ending_here=0, max_so_far=INT_MIN;
    for(int i=0;i<size;i++)
    {
        // include current element to previous subarray only
        // when it can add to a bigger number than itself.

        if(arr[i] <= max_ending_here + arr[i]){
            max_ending_here+=arr[i];
        }

        //Else start the max subarray from current element

        else{
            max_ending_here = arr[i];
        }
        if(max_ending_here > max_so_far)
          max_so_far = max_ending_here;

    }

    return max_so_far;
}

int main()
{
    int arr[]= { -2,-3,4,-1,-2,1,5,-3};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int max_sum= maxSubarraySum(arr,n);
    cout<<"Maximum contiguous sum is "<< max_sum;
    return 0;
}
