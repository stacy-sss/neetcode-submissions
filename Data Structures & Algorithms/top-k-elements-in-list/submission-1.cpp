class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int, int> m;
        for(const auto& n : nums){
            m[n]++;
        }
        std::vector<std::pair<int, int>> v(m.begin(), m.end());
        
        std::sort(v.begin(), v.end(),
        [](const auto& a, const auto& b){
            return a.second > b.second;
        });
        std::vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(v[i].first);
        }
        return res;
    }
};
