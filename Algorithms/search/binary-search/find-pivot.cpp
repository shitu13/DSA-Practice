// Find Pivot Element in an array

#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid = (start + end)/2;
    }
    return start;
}

int main() {
    int arr[] = {4,5,6,7,0,1,2};  // Here 0 is the pivot which is at Index 4;
    cout << "Pivot element is at index: " << getPivot(arr, 6) <<endl;
    return 0;
}