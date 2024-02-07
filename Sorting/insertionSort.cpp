#include<iostream>
using namespace std;

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {cout << A[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *A, int n){

    int key, j;
    for (int  i = 1; i < n; i++)
    {
        key = A[i];
        j = i-1;

        while(j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    
    }
    
}

int main()
{
    int A[]= {12, 20, 10, 18, 17, 9};
    int n = 6;
    
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    
    return 0;
}