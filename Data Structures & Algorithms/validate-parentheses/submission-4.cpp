class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;          // закрывашка без пары
                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;                      // несовпадающий тип
                }
                st.pop();
            }
        }
        return st.empty();
    }
};