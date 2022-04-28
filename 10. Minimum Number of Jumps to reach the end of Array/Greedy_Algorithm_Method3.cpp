// Algorithm:

// Consider three variables, jumps, which stores the number of jumps, end, which denotes the end of the array and farthest denoting the farthest one can jump and initialise them to 0.
// Traverse over the given array and perform the following operation:
// farthest = i + nums[i]
// If end is reached, then ith jump is finished, therefore update end = farthest.
// Return total jumps.

#include<bits/stdc++.h>
using namespace std;


int minJump(int nums[], int n)
{
    int jumps = 0, currentJumpEnd= 0, farthest=0;

    for(int i=0; i<n-1; i++)
    {
        farthest = max(farthest, i+ nums[i]);
        if(i==currentJumpEnd){
            jumps++;
            currentJumpEnd = farthest;
        }
    }

    return jumps;
}