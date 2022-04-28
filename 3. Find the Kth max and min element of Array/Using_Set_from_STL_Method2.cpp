//we can find the kth smallest element in time complexity better than O(N log N). we know the Set in C++ STL is implemented 
//using Binary Search Tree and we also know that the time complexity of all cases(searching, inserting, deleting ) 
//in BST is log (n) in the average case and O(n) in the worst case. We are using set 
//because it is mentioned in the question that all the elements in an array are distinct.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={12,3,5,7,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    set<int> s(arr,arr+n);
    set<int>::iterator itr
        =s.begin();

    advance(itr,k-1);

    cout<<*itr<<"\n";

    return 0;    
}


//Time Complexity:  O( log N) in Average Case and O(N) in Worst Case
//Auxiliary Space: O(N)