#include<bits/stdc++.h>
using namespace std; 

int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int low = 0;
	int high = arr.size()-1;
	int ans = arr.size();
	int mid = (low + high)/2;

	while(low<=high){
		if(arr[mid]>=m){
			ans = mid;
			high = mid - 1;
		}else
			low = mid + 1;
		
		mid = (low + high)/2;
	}
	return ans;
}


/*
https://www.naukri.com/code360/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries
*/