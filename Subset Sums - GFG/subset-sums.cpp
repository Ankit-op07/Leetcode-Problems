// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<int>temp;
       vector<int>ans;
       fun(0,arr,temp,ans,N);
       
       return ans;
       
    }
    
    void fun(int i,vector<int>&arr,vector<int>&temp,vector<int>&ans,int N){
        
        if(i==N){
            int sum=0;
            for(int j=0;j<temp.size();j++){
                sum+=temp[j];
            }
            ans.push_back(sum);
            return ;
        }
        
        temp.push_back(arr[i]);
        fun(i+1,arr,temp,ans,N);
        temp.pop_back();
        fun(i+1,arr,temp,ans,N);
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends