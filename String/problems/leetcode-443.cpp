/*
Leetcode 443. String Compression
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, idx = 0;

        while (i < n) {
            char curr_char = chars[i];
            int cnt = 0;

            while (i < n && chars[i] == curr_char) {
                cnt++;
                i++;
            }
            chars[idx] = curr_char;
            idx++;
            if (cnt > 1) {
                string temp = to_string(cnt);

                for (char& ch : temp) {
                    chars[idx] = ch;
                    idx++;
                }
            }
        }
        return idx;
    }
};
