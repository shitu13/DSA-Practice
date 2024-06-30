#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target)
                return true;
        }
    }
    return false;
}
int main() {

                    //           2d Array Initialization->>>>  int array[row][column]
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

    //search in the array
    int target;
    cout << "Enter the element you want to search: "<<endl;
    cin >> target;

    if(isPresent(arr, target, 3, 4))
        cout <<"Element is present: "<< endl;
    else
        cout <<"Element is not present" << endl;
    
    return 0;
}