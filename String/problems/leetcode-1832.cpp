/*
Leetcode 1832. Check if the Sentence Is Pangram
*/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> cnt(26, 0);

        for (char& ch : sentence) {
            int idx = ch - 'a';
            cnt[idx]++;
        }

        for (int i = 0; i < 26; i++) {
            if (cnt[i] == 0)
                return false;
        }
        return true;
    }
};
