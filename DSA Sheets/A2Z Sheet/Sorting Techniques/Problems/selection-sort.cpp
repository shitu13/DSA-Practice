public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int minIdx = i;
        
        for(int j = i+1; j < sizeof(arr); j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        
        return minIdx;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0; i< n-1; i++){
           
           int minIdx = select(arr, i);
           swap(&arr[i], &arr[minIdx]);
       }
    }