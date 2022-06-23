class Solution
{
    public:
        bool canDivide(vector<int> b, int k, int m, int mid)
        {
            int parts = 0;

            int count = 0;
            for (int i = 0; i < b.size(); i++)
            {
                if (b[i] <= mid)
                {
                    count++;
                }
                else
                {

                    count = 0;
                }
                if (count == k)
                {
                    parts++;
                    count = 0;
                }
            }
            if (parts < m)
            {
                return true;
            }
            return false;
        }

    int minDays(vector<int> &b, int m, int k)
    {
        int n = b.size();
        if (m * k > n)
        {
            return -1;
        }

        int l = 1;
        int h = *max_element(b.begin(), b.end());
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            bool ok = canDivide(b, k, m, mid);
            if (ok)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return l;
    }
};