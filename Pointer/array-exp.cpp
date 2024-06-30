// Pointer - experiment with Array

#include <iostream>
using namespace std;

    //        arr[i] = *(arr=i)
    //        i[arr] = *(i+arr)
    
    //        * means value at
    //        & means address of 


int main() {

    
    int arr[10]={100,200,300,400,500,600,700,800,900,1000};

    cout <<"The address of the first block of the array is: "<< arr <<endl;
    cout << "The address of the first block of the array is: "<< &arr[0] <<endl;
    cout <<  "The address of the first block: " << &arr[0] <<endl;
    cout << arr[0] <<endl;

    

    cout<<"The value at index 0 is: "<< *&arr[0] <<endl;
    cout<<"The value at index 0 is: "<< *arr <<endl;
    
    
    cout<<"The address of index 5 is: "<< (arr+5) <<endl;
    cout<<"The value at index 5 is: "<< 5[arr] <<endl;
    
    cout<<"The value at index 9 is: "<< *(arr+9) <<endl;
    cout<<"The value at index 9 is plus 1 "<< *(arr+9) <<endl;
    cout << "Size of the array is: " << sizeof(arr) <<endl;

    int temp[5]={1,3,5,0,5};

   
    cout << (&temp) <<endl;
    cout << &temp+1 <<endl;
    cout << (&temp+1) << endl;
    cout << (*temp+1)<<endl;

    int *ptr = &temp[0];
    cout << ptr <<endl;
    ptr = ptr+1;
    cout <<ptr <<endl;

    //    ↓↓↓↓↓↓↓↓↓ 
    char *c = &ch[0];
    
    cout << *c << endl;
    cout << c << endl;

        
    return 0;
}