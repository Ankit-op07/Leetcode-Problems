class Solution {
public:
    int halveArray(vector<int>& nums) {
       priority_queue<double> pq;
        
        double total_sum=0;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            total_sum += nums[i];
        }
        double curr_sum=total_sum;
        int ans=0;
        while(curr_sum>(total_sum/2)){
            double max_number = pq.top();
            pq.pop();
            pq.push(max_number/2);
            curr_sum -= max_number/2;
            ans++;
        }
        return ans;
    }
};