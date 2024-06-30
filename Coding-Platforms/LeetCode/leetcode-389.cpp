// Find the Difference - LEETCODE 389

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0; i<t.length(); i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return 'x';
    }
};

class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_t = 0, sum_s =0;

        for(auto c: s)
            sum_s+= c;
        
        for(auto c: t)
            sum_t+= c;

        return (char)sum_t-sum_s;
    }
};