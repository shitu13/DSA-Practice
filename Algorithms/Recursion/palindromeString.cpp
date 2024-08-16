#include <iostream>
using namespace std;

bool isPalindrome(string str, int start, int end){

    if(start>end)
        return true;

    if(str[start]!=str[end])
        return false;
    
    else 
        return isPalindrome(str, start+1, end-1);
}

int main() {
    string str = "UnitedStatesOfAmerica";
    int start = 0;
    int end = str.length() -1;
    
    bool res = isPalindrome(str, start, end);

    if(res)
        cout << "The String is a Palindrome." <<endl;
    else
        cout << "The string is not a Palindrome" <<endl;
    
    
    return 0;
}