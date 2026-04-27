class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                open.push(c);
            }
            else {
                if (open.empty()) {
                    return false;
                }
                char top = open.top();
                open.pop();
                if (c == ')' && top != '(') return false;
                if (c == ']' && top != '[') return false;
                if (c == '}' && top != '{') return false;
            }
        }
        return open.empty();
    }
};
