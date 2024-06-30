//  Pass by value and pass by reference

#include <iostream>
using namespace std;

void update(int n){
    n++;
}

// >>>>>>>>>>>>>> Pass By Reference <<<<<<<<<<<<<<//
void update1(int& n){
    n++;
}
                                
int main() {
    
    int n =5;
    char ch = 'A';
    float f = 3.1416;
    double d = 9.81;
    float *ptr = &f;

                                // >>>>>>>>>>>>>> Pass By Reference <<<<<<<<<<<<<<
    cout<< "Before: " << n <<endl;
    update(n);
    cout <<"After: " <<n <<endl;

                                // >>>>>>>>>>>>>> Pass By Reference <<<<<<<<<<<<<<//
    cout<< "Before: " << n <<endl;
    update1(n);
    cout <<"After: " <<n <<endl;
    cout <<endl;

                                // >>>>>>>>>>>>>> Size of Data types <<<<<<<<<<<<<<//
    cout << "Size of different data types:" <<endl;
    cout << "Size of a character: " << sizeof(ch) << " Byte"<<endl;
    cout << "Size of an integer: " << sizeof(n) << " Byte"<<endl;
    cout << "Size of a double: " << sizeof(d) << " Byte"<<endl;
    cout << "Size of a float: " << sizeof(f) << " Byte"<<endl;
    cout << "Size of a pointer: " << sizeof(ptr) << " Byte"<<endl;
    
    return 0;
}