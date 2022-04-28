//Approach 2: Dynamic Programming
//In the previous approach, if you clearly observe the recursion tree, 
//it can be clearly seen that many of the subproblems are calculated more than once, 
//which in turn takes more time as well as space. Therefore, 
//we can store the answer to such overlapping subproblems in a table and get the answer to this problem in O(1) using a dynamic programming approach.

// Algorithm:

// Create a dp[] array of size N, where N is the size of the given array.
// Initialise all the elements of the array to INT_MAX.
// Initialise dp[0] = 0, since, we are standing at the first index and we need no jumps to reach the first element.
// The recursive structure would be:
// dp[i] = 1 + min(dp[i], 1 + min( dp[i+1], dp[i+2],. . . dp[i + dp[i] + 1]))
// Iterate a loop from 0 till N – 1. Run a nested loop from i + 1 till min(i + arr[i] + 1, n) and find the minimum of jumps[i] and i + jumps[i].
// After iterations, return the value of dp[N – 1]

#include<bits/stdc++.h>
using namespace std;

int minJump(int num[], int n){
    int dp[n] = {INT_MAX}; 
    dp[0] = 0;
    for(int i=0; i<n; i++)
    {
        for(j= i+1 ; j< min(i+num[i] + 1, n ) ; j++){

            dp[j]= min(dp[j],1+dp[i]);
        }
    }
    return dp[n-1];
}


