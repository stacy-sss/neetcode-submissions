class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> p;
         if (s.size() != t.size()) return false;
        for(const auto& c : s){
            p[c]++;
        }
        for(const auto& c : t){
            p[c]--;
        }
        for(const auto& c : p){
            if(c.second != 0){
                return false;
            }
        }
        return true;
    }
};
