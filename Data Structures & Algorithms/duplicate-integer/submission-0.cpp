class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> uniq;
        for(const auto& n : nums){
            uniq.insert(n);
        }
        if(uniq.size() != nums.size()){
            return true;
        }else{
            return false;
        }
    }
};