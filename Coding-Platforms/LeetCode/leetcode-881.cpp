//// Boats to Save People - LEETCODE 881

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int start = 0, end = people.size()-1;
        int cnt = 0;

        while(start<=end){
            if(people[start]+people[end]<=limit){
                start++;
                end--;
                cnt++;
            }
            else{
                end--;
                cnt++;
            }
        }
        return cnt;
    }
};