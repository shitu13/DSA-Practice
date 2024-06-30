// binary Search with Recursion

#include <iostream>
using namespace std;

bool binarySearch(int* arr, int start, int end, int key){

    int mid = start + (end-start)/2;

    //base case 
    if(start>end)
        return false;

    else if(arr[mid]==key)
        return true;

    //Progressive approach 
    else if(arr[mid]<key)
        return binarySearch(arr, mid+1, end, key);

    else 
        return binarySearch(arr, start, mid-1, key);
}

int main() {
    
    int arr[6] = {1,3,9,10,15,20};
    int size = 6;
    int key = 3;

    bool bin = binarySearch(arr, 0, 5, key);

    if(bin)
        cout << "Item Found." <<endl;
    else
        cout<<"Item not Found." <<endl;
    
    return 0;
}