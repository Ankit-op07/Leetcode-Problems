// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	
	
	int findMaxSum(int *arr, int n) {
	    
	    vector<int>dp(n+1,-1);
	    dp[1]=arr[0];
	    dp[0]=0;
	    
	    for(int i=2;i<=n;i++){
	        
	       
	        int pick=arr[i-1]+dp[i-2];
	        
	        int nonPick = dp[i-1];
	        
	        dp[i]=max(pick,nonPick);
	    }
	    
	    return dp[n];
    
     
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends