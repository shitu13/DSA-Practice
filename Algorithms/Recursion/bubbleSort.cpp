#include <iostream>
using namespace std;

void bubbleSort(int* arr, int n){

    //base case
    if(n==0 or n==1)
        return;

    for(int j=0; j<n-1; j++){
           if(arr[j]>arr[j+1])
              swap(arr[j],arr[j+1]);
           }

    bubbleSort(arr+1, n-1);
}

int main() {
    int size, key;
    cout<< "Enter the size of the array: " <<endl;
    cin >> size;
    int arr[size];

    cout<< "Enter " << size << " elements of the array: " <<endl;
    for(int i=0; i<size; i++)
        cin >>arr[i];

    bubbleSort(arr, size);
    cout<< "Here is the sorted Array"<<endl;

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    
    
    return 0;
}