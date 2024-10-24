class Solution {
public:
    bool canEatAll(vector<int>& piles, int givenTime, int hrs) {
        int totalHrs = 0;

        for (int& x : piles) {
            totalHrs += x / givenTime;

            if (x % givenTime != 0)
                totalHrs++;
        }

        return totalHrs <= hrs;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canEatAll(piles, mid, h)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};