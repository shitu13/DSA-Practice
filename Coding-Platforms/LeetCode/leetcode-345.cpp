class Solution {
private:
    bool isVowel(char& ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }

public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (!isVowel(s[j]))
                j--;

            else if (!isVowel(s[i]))
                i++;

            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};