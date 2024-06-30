/// Reverse Prefix of Word - LEETCODE 2000

class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int len = word.length();
        int i = 0;

        for(i=0; i<len; i++){
            ans+=word[i];
            if(word[i]==ch)
                break;
            if(i==len-1){
                return ans;
                break;
            }
        }
        reverse(ans.begin(), ans.end());
        ans+= word.substr(i+1, len-i);
        return ans;
    }
}; 