class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            int current = getValue(s[i]);
            int next = 0;
            if (i + 1 < s.length()) {
                next = getValue(s[i + 1]);
            }
            if (current < next) {
                total = total - current;
            }
            else {
                total = total + current;
            }
        }
       return total;
    }
    int getValue(char roman) {
        if (roman == 'I') return 1;
        if (roman == 'V') return 5;
        if (roman == 'X') return 10;
        if (roman == 'L') return 50;
        if (roman == 'C') return 100;
        if (roman == 'D') return 500;
        if (roman == 'M') return 1000;
        return 0;
    }
};
