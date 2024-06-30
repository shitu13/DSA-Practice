///// Number of Steps to Reduce a Number to Zero - LEETCODE 1342

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num != 0) {
            if (num % 2 == 0)
                num /= 2;
            else if (num % 2 != 0)
                num -= 1;

            count++;
        }
        return count;
    }
};