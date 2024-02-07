#include<iostream>
using namespace std;

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {cout << A[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *A, int n){
    for(int i=0; i<n-1; i++){
            int indexofMin = i;

            for (int j = i+1; j < n; j++)
            {
                if(A[j] < A[indexofMin])
                indexofMin = j;
            }

            swap(A[i], A[indexofMin]);
     }

}

int main()
{
    int A[]= {12, 20, 10, 18, 17, 9};
    int n = 6;
    
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    
    return 0;
}