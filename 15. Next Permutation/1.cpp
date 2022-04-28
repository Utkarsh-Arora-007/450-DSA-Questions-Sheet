#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>=1;j--)
            {
                if(arr[i] & arr[j]==0)
                {
                    continue;
                    i++;
                }
                else{
                    if(arr[i]> arr[j])
                    {
                        int temp;
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        cnt++;
                        i++;
                        j--;
                    }
                    
                    else{
                        continue;
                        i++;
                    }
                }
            }
        }
        
        if(cnt>0)
        {
        cout<<"Yes"<<endl;
        }
        else{
        cout<<"No"<<endl;
        }
    }
    // your code goes here
	return 0;
}
