class TimeMap {
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        auto& m = mp[key];
        auto it = m.upper_bound(timestamp);
        if (it == m.begin()) return "";       // нет ни одного <= timestamp
    return std::prev(it)->second;
    }
    private:
    std::unordered_map<std::string, std::map<int, std::string>> mp;
};
