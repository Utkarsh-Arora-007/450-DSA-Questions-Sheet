//A simple approach to solve this problem is to start from the first element of the array and recursively travel to all elements that are reachable from that element. Similarly, 
//recursively travel to all other elements and find the minimum jumps to reach the end of the array.

// Algorithm:

// Create a recursive function that determines the minimum jumps required to reach the end of the array.
// Start from the first element of the array and recurse for each step till current step > 0.
// Minimise the value for each iteration.
// Return the minimum jumps.
#include<bits/stdc++.h>
using namespace std;


int decideJump(int nums[],int n, int currpos)
{
    if(currpos>= n-1){
        return 0;
    }

    int minJump = INT_MAX;
    int maxSteps= nums[currpos];

    while(maxSteps > 0)
    {
        minJump= min(minJump, 1+ decideJump(nums , n, currpos + maxSteps));
        maxSteps = maxSteps - 1;

    }
    
    return minJump;
}

int jump(int nums[], int n)
{
    return decideJump(nums,n,0);
}