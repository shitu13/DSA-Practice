// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long low = 0, high = n;
        long long res = 0;
        
        while(low <= high){
            long long mid = low + (high-low)/2 ;
            long long square = mid * mid;
            
            if(square > n)
                high = mid - 1;
            else if(square < n){
                low = mid + 1;
                res = mid;
            }else{
                return mid;
            }
        }
        return res;
    }
};