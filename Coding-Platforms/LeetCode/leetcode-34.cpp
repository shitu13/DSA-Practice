////Find First and Last Position of Element in Sorted Array LEETCODE - 34

class Solution {
private: 
    int firstOcc(vector<int>& arr, int k){
    int s =0, e = arr.size()-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int k){
    int s =0, e = arr.size()-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans;
        ans.push_back(firstOcc(nums, target));
        ans.push_back(lastOcc(nums, target));

        return ans;
    }
};