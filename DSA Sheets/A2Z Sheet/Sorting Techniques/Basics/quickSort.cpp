#include<iostream>
using namespace std;

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {cout << A[i] << " ";
    }
    cout << endl;
}

int partition(int *A, int low, int high){
    int pivot = A[high];
    int i = low-1;

    for(int j=low; j<high; j++){
        if(A[j] < pivot){
            i++;
            swap(A[i], A[j]);
        }
    }
    i++;
    int temp = A[i];
    A[i] = pivot;
    A[high] = temp;
    return i;

}

void quickSort(int A[], int low, int high){

    if(low<high){
    int pivotIndex = partition(A, low, high);

    quickSort(A, low, pivotIndex-1);
    quickSort(A, pivotIndex+1, high);

    }

}


int main()
{
    int A[]= {12, 20, 10, 18, 17, 9};
    int n = 6;
    
    printArray(A, n);
    quickSort(A, 0, n-1);
    printArray(A, n);
    
    return 0;
}