class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() -1;
        int best = 0;
        while(l<r){
            int h = std::min(heights[l], heights[r]);
            int w = r - l;
            best = std::max(best, h * w);
            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return best;
    }
};
