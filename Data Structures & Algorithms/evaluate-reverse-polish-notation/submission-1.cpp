class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> s;
        for(const auto& c : tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/"){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                if(c == "+"){
                    s.push(a + b);
                }else if(c == "-"){
                    s.push(a - b);
                }else if(c == "*"){
                    s.push(a * b);
                }else{
                    s.push(a/b);
                }
            }else{
                s.push(std::stoi(c));
            }
        }
        return s.top();
    }
};
