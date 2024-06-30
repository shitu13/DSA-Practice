#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int minidx = i;
        for(int j=i; j<n; j++){
            if(arr[minidx]>arr[j])
                minidx = j;
        }
        swap(arr[minidx], arr[i]);
    }
}

int main() {
    int size, key;
    cout<< "Enter the size of the array: " <<endl;
    cin >> size;
    int arr[size];

    cout<< "Enter " << size << " elements of the array: " <<endl;
    for(int i=0; i<size; i++)
        cin >>arr[i];

    selectionSort(arr, size);
    cout<< "Here is the sorted Array"<<endl;

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    
    
    return 0;
}