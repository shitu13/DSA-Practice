class Solution{
	public:
	int val(int mid, int n, int m){
	    long long ans = 1;
	    for(int i = 1; i<=n; i++){
	        ans*= mid;
	        
	        if (ans > m)
	            return 2;
	    }
	    if(ans == m)
	        return 1;
	    
	    return 0;
	}
	
	int NthRoot(int n, int m)
	{
	    // Code here.
	    long long low = 1, high = m;
	    
	    while(low <= high){
	        int mid = low + (high - low) / 2;
	        int value = val(mid, n, m);
	        
	        if(value == 1)
	            return mid;
	        
	        else if(value == 0)
	            low = mid + 1;
	            
	        else
	            high = mid - 1;
	    }
	    
	    return -1;
	}  
};