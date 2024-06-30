#include <iostream>
using namespace std;

int main() {
    int num =5;
    int* p = &num;
    
    char ch = 'A';
    char* ptr = &ch;

   
    cout<<"Address of num is: "<<p<<endl;
   
    
    cout <<"Value of num is: "<< num <<endl;
    
    cout <<"Address is: "<<*&num <<endl;
    
    cout << *ptr <<endl;

    double d1 = 4.3;
    double d2 = 8.30;
    
    double* ptr2 = &d1;
     double* ptr3 = &d2;

     cout <<"Value of d is: "<< d1 <<endl;
    
    cout <<"Address is: "<<ptr2 <<endl;

    cout <<"Value of d is: "<< d2 <<endl;
    
    cout <<"Address is: "<<++ptr2 <<endl;

    cout << "Size of Integer: " << sizeof(num) <<endl;
    cout << "Size of Pointer: " << sizeof(ptr) <<endl;
    cout << "Size of Double: " << sizeof(double) <<endl;

    return 0;
}