class Solution
{
    public:
        int leastBricks(vector<vector < int>> &wall)
        {
            unordered_map<int, int> mpp;

            for (auto v: wall)
            {
                int sum = 0;
                for (int i = 0; i < v.size(); i++)
                {
                    sum += v[i];
                    if (i != v.size() - 1)
                    {
                        mpp[sum]++;
                    }
                }
            }
            if (mpp.size() == 0)
            {
                return wall.size();
            }
            int ans = INT_MAX;
            for (auto s: mpp)
            {
                int k = wall.size()-s.second;
                ans = min(ans,k);
            }
            return ans;
        }
};