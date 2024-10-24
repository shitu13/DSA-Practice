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

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (first == -1 && nums[i] == target)
                first = i;

            if (nums[i] == target)
                last = i;
        }
        return {first, last};
    }
};