class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> s(nums.begin(), nums.end());
        int count = 0;
        for(auto x : s){
            if(s.count(x-1)){
                continue;
            }
            int cur = x;
            int len = 1;
            while(s.count(cur+1)){
                cur++;
                len++;
            }
            count = std::max(count, len);
        }
        return count;
    }
};
