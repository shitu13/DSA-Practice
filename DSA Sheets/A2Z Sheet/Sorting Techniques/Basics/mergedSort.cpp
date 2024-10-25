#include<iostream>
using namespace std;

void printArray(int *A, int n){
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

void conquer(int *A, int si, int mid, int ei){

    int merged[ei -si +1];
    int idx1 = si;
    int idx2 = mid+1;
    int x =0;

    while(idx1<=mid && idx2<=ei){
        if(A[idx1]<=A[idx2]){
            merged[x++] = A[idx1++];
        }
        else{
            merged[x++] = A[idx2++];  
        }
    }

    while(idx1<=mid){
        merged[x++] = A[idx1++];    
    }

    while(idx2<=ei){
        merged[x++] = A[idx2++];    
    }

    for(int i=0, j=si; i<sizeof(merged); i++, j++){
        A[j] = merged[i];
    }

}

void divide(int *A, int si, int ei){
    if(si>=ei){
        return;
    }

    int mid = (ei+si)/2;
    divide(A, si, mid);
    divide(A, mid+1, ei);
    conquer(A, si, mid, ei);
}

int main()
{
    int A[]= {12, 20, 10, 18, 17, 9, 13};
    int n = sizeof(A);
    
    printArray(A, n);

    divide(A, 0, n-1);
    printArray(A, n);
    
    return 0;
}