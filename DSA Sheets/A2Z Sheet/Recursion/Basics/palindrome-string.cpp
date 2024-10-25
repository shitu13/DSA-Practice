class Solution {
private:
    bool checkPalindrome(string s, int l, int r){
        if(l >= r)
            return true;
        
        // to check if the character is alphanumeric
        if(!isalnum(s[l]))
            return checkPalindrome(s, l+1, r);
        
        if(!isalnum(s[r]))
            return checkPalindrome(s, l, r-1);

        if(tolower(s[l])!= tolower(s[r]))
            return false;
        
        return checkPalindrome(s, l+1, r-1);
    }
public:
    bool isPalindrome(string s) {
        return checkPalindrome(s, 0, s.length()-1);
    }
};