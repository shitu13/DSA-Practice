#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start =0;
    int end = size-1;

    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//If the value of mid = [[[(start+end)/2]]] exceeds   2^31  //>>>>>>>>>>>>>>>>>> 
    int mid = start+(end-start)/2;
    
    while(start<=end){
        if(key==arr[mid])
            return mid;
        else if(key>arr[mid])
            start = mid+1;
        else
            end = mid-1;
        
        mid = start+(end-start)/2;
    }
    return -1;
}
int main() {
    int size, key;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++)
        cin >>arr[i];
    cin>>key;
    int position = binarySearch(arr, size, key);
    
    cout << "Your element " << key <<" is found at "<< position <<" position" <<endl;
    return 0;
}