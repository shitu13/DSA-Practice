                /******************************************************************************/
                // >>>>>>>>>>>>>>> Length of Last Word <<<<<<<<<<<<<< LEETCODE 58 /////


class Solution {
public:
    int lengthOfLastWord(string s) {
        int ctn = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ')
                ctn++;
            else {
                if (ctn > 0)
                    break;
            }
        }
        return ctn;
    }
};