class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> m;//считаем частоты
        int l = 0;
        int best = 0;
        int freq = 0;
        for(int r = 0; r<s.size(); r++){
            m[s[r]]++;
            freq = std::max(freq, m[s[r]]);
            while((r-l+1)-freq > k){
                m[s[l]]--;
                l++;
            }
            best = std::max(best, r-l+1);
        }
        return best;
    }
};
