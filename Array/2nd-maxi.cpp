vector<int> getSecondLargestElement(int n, vector<int> a) {
    // Write your code here.

    int f_max = INT_MIN, s_max = INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i] > f_max){
            s_max = f_max;
            f_max = a[i];
        }else if(a[i]>s_max && a[i]<f_max){
            s_max = a[i];
        }
    }
    
    return x_max;
}

