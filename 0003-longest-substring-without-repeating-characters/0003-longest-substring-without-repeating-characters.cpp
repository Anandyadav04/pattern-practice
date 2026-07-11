class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int res = INT_MIN;
        unordered_map< char, int > f;
        for (int high = 0; high < s.size(); high++) {
            f[s[high]]++;
            int k = high - low + 1;
            while(f.size() < k){
                f[s[low]]--;
                if(f[s[low]] == 0){
                    f.erase(s[low]);
                }
                low++;
                k = high -low + 1;
            }
            if(f.size() == k){
                res = max(res, k);
            }
        }
        return res == INT_MIN ? 0 : res;
    }
};