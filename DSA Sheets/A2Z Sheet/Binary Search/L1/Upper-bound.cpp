int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int low = 0;
	int high = arr.size()-1;
	int ans = arr.size();
	int mid = (low + high)/2;

	while(low<=high){
		if(arr[mid]>x){
			ans = mid;
			high = mid - 1;
		}else
			low = mid + 1;
		
		mid = (low + high)/2;
	}
	return ans;	
}