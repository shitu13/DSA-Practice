#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i=1; i<n; i++){
        
        int j = i -1, key= arr[i];
        
        while(j>=0 && arr[j]>key){
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1] = key;
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

    insertionSort(arr, size);
    cout<< "Here is the sorted Array"<<endl;

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    
    
    return 0;
}