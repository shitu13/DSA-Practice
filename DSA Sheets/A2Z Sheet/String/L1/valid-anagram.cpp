class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> charCnt(26, 0);

        for (int i = 0; i < s.length(); i++) {
            charCnt[s[i] - 'a']++;
            charCnt[t[i] - 'a']--;
        }

        for (int& cnt : charCnt) {
            if (cnt != 0)
                return false;
        }
        return true;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t ? true : false;
    }
};