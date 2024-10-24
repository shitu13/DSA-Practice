class Solution {
public:
    int getCntBuqe(vector<int>& bloomDay, int mid, int k) {
        int buqeCnt = 0;
        int consCnt = 0;

        // Find count of consecutive flowers can be pick at mid day.
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                consCnt++;
            } else {
                consCnt = 0;
            }

            if (consCnt == k) {
                buqeCnt++;
                consCnt = 0;
            }
        }
        return buqeCnt;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = 0;
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int minDays = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (getCntBuqe(bloomDay, mid, k) >= m) {
                minDays = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return minDays;
    }
};