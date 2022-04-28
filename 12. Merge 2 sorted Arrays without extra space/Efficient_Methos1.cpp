#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int s1=0,e1=n-1;
	    int s2=0,e2=m-1;
	    while(s1<=e1&&s2<=e2){
	        if(arr2[s2]>=arr1[s1]){
	            ++s1;
	        }
	        else{
	            int x = arr1[e1];
	            arr1[e1]=arr2[s2];
	            arr2[s2]=x;
	            ++s2;
	            --e1;
	            
	        }
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);      
	    // code here
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends