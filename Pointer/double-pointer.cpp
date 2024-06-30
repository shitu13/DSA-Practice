#include <iostream>
using namespace std;

void update(int** p){
    p = p+1;
    *p = *p +1;
    //**p = **p +1; 
}

int main(){
    int i = 10;
    int* p = &i;
    int** p2 = &p;

    cout << i <<endl;
    cout << *p <<endl;
    cout << **p2 <<endl;

    cout << &i <<endl;
    cout << p <<endl;
    cout << *p2 <<endl << endl <<endl;

    cout << "before: " << i <<endl;
    cout << "before: " << p <<endl;
    cout << "before: " << *p2 <<endl;

    update(p2);

     cout << "after: " << i <<endl;
    cout << "after: " << *p <<endl;
    cout << "after: " << *p2 <<endl;
    
    return 0;
}