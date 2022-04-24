// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        bool checkOne=true;
        
         for(int i=0;i<n;i++){
           
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                    checkOne=false;
                }
            }
           
        }
        
        if(checkOne){
            return -1;
        }
        
        for(int i=0;i<n;i++){
            bool ok=true;
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                    ok=false;
                    break;
                }
            }
            if(ok){
                return i;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends