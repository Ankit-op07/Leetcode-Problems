class Solution {
public:
   bool isMatch(string s, string p) {
    int m = s.length(), n = p.length();
    int i = 0, j = 0, star = -1, ss = 0;
    while (i < m) {
        if (j < n && (p[j] == '?' || p[j] == s[i] || (p[j] == '^' && isdigit(s[i])))) {
            ++i;
            ++j;
        }
        else if (j < n && p[j] == '*') {
            star = j++;
            ss = i;
        }
        else if (star != -1) {
            j = star + 1;
            i = ++ss;
        }
        else return false;
    }
    while (j < n && p[j] == '*') ++j;
    return j == n;
}
};