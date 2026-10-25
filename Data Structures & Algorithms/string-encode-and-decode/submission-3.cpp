class Solution {
public:

    string encode(vector<string>& strs) {
        std::string res;
        for(auto& s : strs){
            int len = s.length();
            res += std::to_string(len); 
            res+="#";
            res+=s;
        }
        return res;
    }

    vector<string> decode(string s) {
        std::vector<string> res;
        int i = 0;
        while(i<s.size()){
            auto hash = s.find("#", i);
            int len = std::stoi(s.substr(i, hash - i));

            std::string word = s.substr(hash+1, len);
            res.push_back(word);
            i = len + hash + 1;
        }
        return res;
    }
};
