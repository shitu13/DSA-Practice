// Print sum of every row and Column of a 2D Array

#include <iostream>
using namespace std;

void printSumRow(int arr[][4], int row, int col){
    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col =0; col<4; col++){
            sum+= arr[row][col];
        }
        cout <<"Sum of row "<<row+1 <<" "<< sum <<endl;
    }
}

void printSumCol(int arr[][4], int row, int col){
    for(int col = 0; col<4; col++){
        int sum = 0;
        for(int row=0; row<3; row++){
            sum+= arr[row][col];
        }
        cout <<"Sum of col "<<col+1 <<" "<< sum <<endl;
    }
}
int main() {

         //         2d Array Initialization->>>>  int array[row][column]
    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr1[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }

    cout <<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr1[i][j] << " ";
        }
        cout <<endl;
    }

    //Print the sum
    cout << "Results of Row" <<endl;
    printSumRow(arr, 3, 4);
    cout<< endl;
    cout << "Results of Col" <<endl;
    printSumCol(arr, 4, 3);
    return 0;
}