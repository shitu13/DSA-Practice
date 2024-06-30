#include <iostream>
using namespace std;

void waveSort(int arr[], int n){

    for(int i=1; i<n; i+=2){
        
        if(arr[i] > arr[i-1])
            swap(arr[i], arr[i-1]);

        if(arr[i] > arr[i+1] and i<= n-2)
            swap(arr[i], arr[i+1]);
    }
}

int main() {
    int size; 
    cout<< "Enter the size of the array: " <<endl;
    cin >> size;
    int arr[size];

    cout<< "Enter " << size << " elements of the array: " <<endl;
    for(int i=0; i<size; i++)
        cin >>arr[i];

    waveSort(arr, size);
    cout<< "Here is the wave-sorted Array"<<endl;

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    
    
    return 0;
}