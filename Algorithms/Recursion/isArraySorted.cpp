#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 or size==1)
        return true;
    else if(arr[0]>arr[1])
        return false;
    else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}
int main() {
    int arr[5] = {1,3,9,6,7};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans) 
        cout <<"The Array is Sorted." <<endl;
    else 
        cout<< "The array is not Sorted" <<endl;
    
    return 0;
}