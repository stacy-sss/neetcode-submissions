class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            auto [max1, max2] = max(stones);

            ers(stones, max1);
            ers(stones, max2);

            if (max1 != max2) {
                stones.push_back(max1 - max2);
            }
        }
        return stones.empty() ? 0 : stones[0];
    }

private:
    std::pair<int, int> max(vector<int>& stones) {
        int max1 = -1;
        int max2 = -2;
        for (int i = 0; i < (int)stones.size(); i++) {
            if (stones[i] > max1) {
                max2 = max1;
                max1 = stones[i];
            } else if (stones[i] > max2) {
                max2 = stones[i];
            }
        }
        return {max1, max2};
    }

    void ers(vector<int>& stones, int val) {
        auto it = std::find(stones.begin(), stones.end(), val);
        if (it != stones.end()) stones.erase(it);
    }
};