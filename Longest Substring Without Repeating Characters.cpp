Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int n = s.size();
        int maxLength = 0;
        vector<int> mpp(256,-1);
        for(int right = 0; right < n; right++){
            if(mpp[s[right]]>=left) {
                left = mpp[s[right]] + 1;
            }
            mpp[s[right]] = right;
            maxLength = max(maxLength, right-left+1);
        }
        return maxLength;
    }
};
