#include <iostream>
using namespace std;

int getSum(int* arr, int size){
    
    if(size==0)
        return 0;
        
    else 
        return arr[0] + getSum(arr+1, size-1);
    
    
}

int main() {
    int arr[5] = {1,3,9,10,8};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum of the Array is: "<< sum <<endl;
    return 0;
}