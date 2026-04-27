class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        for (int i = 0; i < s.length(); i++) {
            string current = "";
            for (int j = i; j < s.length(); j++) {
                if (current.find(s[j]) != string::npos) {
                    break;
                }
                current += s[j];
            }
            if (current.length() > maxLength) {
                maxLength = current.length();
            }
        }
        return maxLength;
    }
};
