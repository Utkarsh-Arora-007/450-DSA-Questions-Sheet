//We can find k’th smallest element in time complexity better than O(N Log N). 
//A simple optimization is to create a Min Heap of the given n elements and call extractMin() k times.

#include<bits/stdc++.h>
using namespace std;

//prototype of a utility function to swap two integers

void swap(int *x,int *y);

//A class for Min Heap
class MinHeap{
    int *harr;  //Pointer to array of elements in heap
    int capacity;  //maximum possible size of min heap
    int heap_size; //Current number of elements in min heap

    public:
    MinHeap(int a[],int size); //Contructor
    void MinHeapify(int i);// To minheapify subtree rooted with index
    int parent(int i){ return (i-1)/2 ;}
    int left(int i){ return (2*i+1); }
    int right(int i){ return(2 * i + 2); }

    int extractMin(); //extracts root (minimum) element
    int getMin(){ return harr[0]; } //Returns minimum

};

MinHeap::MinHeap(int a[],int size)
{
    heap_size=size;
    harr=a; //store address of array
    int i=(heap_size-1) /2;
    while(i>=0)
    {
        MinHeapify(i);
        i--;
    }
}

//Method to remove minimum element (or root) from min heap

int MinHeap::extractMin()
{
    if(heap_size==0)
      return INT_MAX;

   // Store the minimum value.
   int root=harr[0];

   //If there are more than 1 items, move the last item to root
   // and call heapify.

   if(heap_size>1){
     harr[0]=harr[heap_size -1];
     MinHeapify(0);    
}

heap_size--;

return root;

}


// A recursive method to heapify a subtree with root at given index
// This method assumes that the subtrees are already heapified.

void MinHeap::MinHeapify(int i)
{
    int l=left(i);
    int r=right(i);
    int smallest=i;

    if(l< heap_size && harr[l] <harr[i])
      smallest =r;

    if(r< heap_size && harr[r] < harr[smallest])
    smallest=r;

    if(smallest!=i)
    {
     swap(&harr[i],&harr[smallest]);
     MinHeapify(smallest);  
    }

}

//A utility to swap two elements

void swap(int *x, int *y)
{
    int temp= *x;
    *x=*y;
    *y=temp;
}

//Function to return K'th smallest element in a given array

int kthSmallest(int arr[],int n,int k)
{
    //Build a Heap of n elements : O(n) time

    MinHeap mh(arr,n);

    //Do Extract min (k-1) times
    for(int i=0;i<k-1; i++)
      mh.extractMin();

    //Return root
    return mh.getMin();  
}


//Driver program to test above methods

int main()
{
    int arr[]={12,3,5,7,19};
    int n= sizeof(arr) / sizeof(arr[0]) , k=1;
    cout<<"K'th smallest element is "<<kthSmallest(arr, n, k);
    return 0;
}


//Time complexity of this solution is O(n + kLogn).

