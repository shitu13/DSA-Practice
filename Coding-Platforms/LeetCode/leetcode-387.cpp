//// First Unique Character in a String - LEETCODE 387

class Solution {
public:
    int firstUniqChar(string s) {
        int count[26]={0};

        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            count[ch-'a']++;
        }

        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(count[ch-'a']==1){
                return i;
                break;
            }
        }
        return -1;
    }
};