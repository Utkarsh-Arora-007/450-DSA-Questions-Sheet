// Approach: The basic idea is to use a HashMap to solve the problem. But there is a catch,
// the numbers in the array are from 0 to n-1, and the input array has length n. So, the input array can be used as a HashMap. 
//While Traversing the array, if an element ‘a’ is encountered then increase the value of a%n‘th element by n. The frequency can be retrieved by dividing the a % n’th element by n.


// Algorithm: 
// Traverse the given array from start to end.
// For every element in the array increment the arr[i]%n‘th element by n.
// Now traverse the array again and print all those indexes i for which arr[i]/n is greater than 1. Which guarantees that the number n has been added to that index
// This approach works because all elements are in the range from 0 to n-1 and arr[i] would be greater than n only if a value “i” has appeared more than once.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int numRay[]={ 0,4,3,2,7,8,2,3,1};
    int arr_size = sizeof(numRay) / sizeof(numRay[0]);

    //count the frequency

    for(int i=0; i<arr_size;i++)
    {
        numRay[numRay[i] % arr_size]= numRay[numRay[i] % arr_size] + arr_size;

    }
    cout<<"The Repeating elements are : "<<endl;
    for(int i=0; i< arr_size;i++){

        if(numRay[i] >= arr_size *2){
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}
