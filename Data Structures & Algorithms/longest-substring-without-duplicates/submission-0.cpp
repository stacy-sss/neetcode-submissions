class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> last;
        int best = 0;
        int l = 0;
        for(int r = 0; r<s.size(); r++){
            if(last.count(s[r]) && last[s[r]] >= l){
                l = last[s[r]] + 1;
            }
            last[s[r]] = r;
            best = std::max(best, r-l+1);
        }
        return best;
    }
};
