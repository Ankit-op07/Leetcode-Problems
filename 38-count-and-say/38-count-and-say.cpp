class Solution
{
    public:

        string fun(string s, int n)
        {

            if (n == 4)
            {
                return s;
            }

            string ans;

            int cnt = 1;
           	//233215
            int i = 1;
           	//1
           	//cnt number
            while (i < s.size())
            {
                if (s[i] == s[i - 1])
                {
                    cnt++;
                }
                else
                {
                    stringstream ss;
                    ss << cnt;
                    char c;
                    ss >> c;

                    ans.push_back(c);
                    ans.push_back(s[i - 1]);
                    cnt = 1;
                }
                i++;

                if (i == s.size())
                {
                    stringstream ss;
                    ss << cnt;
                    char c;
                    ss >> c;

                    ans.push_back(c);
                    ans.push_back(s[i - 1]);
                }
            }
           return fun(ans,n-1);
        }
    string countAndSay(int n)
    {
        if (n == 1)
        {
            return "1";
        }
        else if (n == 2)
        {
            return "11";
        }
        else if (n == 3)
        {
            return "21";
        }

        return fun("1211", n);
    }
};