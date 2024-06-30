// Variable size array in runtime - Dynamic Memory Allocation.

#include <iostream>
using namespace std;

int getSum(int* arr, int n){
    int sum =0;
    for(int i=0; i<n; i++)
        sum+= arr[i];

    return sum;
}

int main() {
    int n;
    cout << "Enter the array Size: "<<endl;
    cin  >> n;

    cout << "Enter " <<n << " elements of the array." <<endl;

    //>>>>>>> Variable size Array >>>>>>>>>>>>//
    int* arr = new int[n];

    //>>>>>>>>>>> Taking Input in the Array >>>>>>>>>//
    for(int i=0; i<n; i++)
        cin>> arr[i];

    int ans = getSum(arr, n);
    cout << "Sum of all the elements in the array is: " << ans <<endl;
    
    return 0;
}