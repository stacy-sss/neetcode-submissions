class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> left(n);
        std::vector<int> right(n);
        int prod1 = 1;
        for(int i = 0; i<n; i++){
            left[i] = prod1;
            prod1 *= nums[i];
        }
        int prod2 = 1;
        for(int i = n -1; i>=0; i--){
            right[i] = prod2;
            prod2 *= nums[i];
        }
        std::vector<int> res(n);
        for(int i = 0; i<n; i++){
            res[i] = left[i] * right[i];
        }
        return res;
    }
};
