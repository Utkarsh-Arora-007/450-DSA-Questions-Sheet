//Method 1 (Simple Linear Search)
//Initialize values of min and max as minimum and maximum of the first two elements respectively. 
//Starting from 3rd, compare each element with max and min, and change max and min accordingly 
//(i.e., if the element is smaller than min then change min, 
//else if the element is greater than max then change max, else ignore the element) 

#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;
    int i;
    //If there is only one element
    //then return it as min and max both

    if(n==1)
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }

    //If there are more than one element,
    //then initialize min and max
    if(arr[0]>arr[1])
    {
        minmax.max=arr[1];
        minmax.min=arr[0];
    }

    else{
        minmax.max=arr[1];
        minmax.min=arr[0];
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]>minmax.max)
        minmax.max=arr[i];

        else if(arr[i]<minmax.min)
        minmax.min=arr[i];
    }

    return minmax;
}   

int main()
{
    int arr[]={ 1000, 11, 445, 1, 330, 3000};
    int arr_size=6;
    struct Pair minmax=getMinMax(arr,arr_size);

    cout<<"Minimum Element is "<<minmax.min<<endl;
    cout<<"Maximum element is "<<minmax.max;

    return 0;

}
