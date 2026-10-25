class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<string>> m;
        for(auto& s : strs){
            std::string key = s;
            std::sort(key.begin(), key.end());
            m[key].push_back(s);
        }
        vector<vector<string>> res;
        for(auto [key, group] : m){
            res.push_back(group);
        }
        return res;
    }
};
