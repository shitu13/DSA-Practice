#include <iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key){
    
    //base case
    if(size==0)
        return false;

    else if(arr[0]==key)
        return true;

    //Progressive criteria
    else{
        bool val = linearSearch(arr+1, size-1, key);
        return val;
    }
}
int main() {
    int arr[5] = {1,3,9,10,8};
    int size = 5;
    int key = 80;

    bool result = linearSearch(arr, size, key);

    if(result)
        cout<<"Element is Found." <<endl;
    else 
        cout << "Element is not Found." << endl;

    return 0;
}