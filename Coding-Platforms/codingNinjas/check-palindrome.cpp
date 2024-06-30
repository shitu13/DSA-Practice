            /*  https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?leftPanelTabValue=PROBLEM*/
                // >>>>>>>>>>>>>>> Check a String Plaindrome? <<<<<<<<<<<<<< CodeStudio /////

bool isPalindrome(string &s)
{
	// Write your code here.
	 int length = s.size();
        int start = 0, end = length-1 ;

        while (start <= end) {
            if (s[start] != s[end]){
                return false;
                break;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
}