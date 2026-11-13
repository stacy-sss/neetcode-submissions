class Solution {
public:
    int findMin(vector<int> &nums) {
        auto min = std::min_element(nums.begin(), nums.end());
        return *min;
    }
};
