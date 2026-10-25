class MinStack {
public:
    MinStack() = default;
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        auto min = std::min_element(v.begin(), v.end());
        return *min;
    }
    private:
    std::vector<int> v;
};
