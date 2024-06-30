//// Ransom Note - LEETCODE 383

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};

        for (int i = 0; i < magazine.length(); i++) {
            char ch = magazine[i];
            count[ch - 'a']++;
        }

        for (int i = 0; i < ransomNote.length(); i++) {
            char ch = ransomNote[i];
            count[ch - 'a']--;
            if (count[ch - 'a'] < 0) {
                return false;
                break;
            }
        }
        return true;
    }
};