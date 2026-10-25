class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 200;
        int best = 0;
        for(int i = 0; i<prices.size(); i++){
            min = std::min(min, prices[i]);
            best = std::max(best, prices[i] - min);
        }
        return best;
    }
};
