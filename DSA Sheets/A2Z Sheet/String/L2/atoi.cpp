class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int sign = 1, i = 0;

        // eleminate whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // check the sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = s[i] == '-' ? -1 : 1;
            i++;
        }

        long res = 0;
        
        //process the result
        while (i < n && isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');

            if (res * sign > INT_MAX)
                return INT_MAX;
            if (res * sign < INT_MIN)
                return INT_MIN;

            i++;
        }
        return res * sign;
    }
};