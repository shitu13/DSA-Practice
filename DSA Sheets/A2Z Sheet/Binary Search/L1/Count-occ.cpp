//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstOcc(int arr[], int n, int x){
	    int low = 0, high = n -1;
	    int res = -1;
	    
	    while(low<=high){
	        int mid = (low + high) / 2;
	        
	        if(arr[mid]==x){
	            res = mid;
	            high = mid -1;
	        }else if(arr[mid]>x){
	            high = mid -1;
	        }else{
	            low = mid + 1;
	        }
	    }
	    return res;
	}
	
	int lastOcc(int arr[], int n, int x){
	    int low = 0, high = n -1;
	    int res = -1;
	    
	    while(low<=high){
	        int mid = (low + high) / 2;
	        
	        if(arr[mid]==x){
	            res = mid;
	            low = mid + 1;
	        }else if(arr[mid]>x){
	            high = mid -1;
	        }else{
	            low = mid + 1;
	        }
	    }
	    return res;
	}
	
	
	int count(int arr[], int n, int x) {
	    // code here
	    int first = firstOcc(arr, n, x);
	    int last = lastOcc(arr, n, x);
	    
	    return first == -1 ? 0 : last - first + 1;
	}
};