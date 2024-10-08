vector<int> getSecondSmallestElement(int n, vector<int> a) {
    // Write your code here.

    int f_min = INT_MAX, s_min = INT_MAX;

    for(int i=0; i<n; i++){
        if(a[i] < f_min){
            s_min = f_min;
            f_min = a[i];
        }else if(a[i] < s_min && a[i] > f_min){
            s_min = a[i];
        }
    }

    return s_min;
}

