// First, we try to sort the array and make each height of the tower maximum. We do this by decreasing the height of all the towers towards the right by k and increasing all the height of the towers towards the left (by k). It is also possible that the tower you are trying to increase the height doesn’t have the maximum height. Therefore we only need to check whether it has the maximum height or not by comparing it with the last element towards the right side which is a[n]-k. Since the array is sorted if the tower’s height is greater than the a[n]-k then it’s the tallest tower available. Similar reasoning can also be applied for finding the shortest tower.  

// Note:- We need not consider where a[i]<k because the height of the tower can’t be negative so we have to neglect that case.

// Time Complexity: O(nlogn)

// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int ans= arr[n-1] - arr[0]; //Maximum possible height difference

    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax=arr[n-1];

    for(int i=1;i<n;i++)
    {
        tempmin = min(arr[0] + k, arr[i]-k);

        tempmax=max(arr[i-1]+k, arr[i-1]-k);

        ans = min(ans, tempmax- tempmin);
    }
    return ans;
}

int main()
{
    int k=6,n=6;
    int arr[n]={7,4,8,8,8,9};
    int ans= getMinDiff(arr,n,k);
    cout<<ans;
}