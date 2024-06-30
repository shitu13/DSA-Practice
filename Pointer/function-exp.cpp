// Pointer - experiment with Function

#include <iostream>
using namespace std;

void print(int *p){
    cout << p <<endl;
    cout << *p <<endl;
}

void update(int *p){
    p = p+1;
    cout << "Inside UPDATE: "<<p <<endl;
}

int getSum(int *arr, int n){

    cout <<"Size of Array is: " << sizeof(arr) <<endl;
    int sum =0;
    for(int i =0; i<n; i++){
        sum+= i[arr];
    }
    return sum;
}

int main() {

    int arr[5]={1,3,4,5,7};
    char ch[6] = "adcde";
   
    int value = 5;
    int *p = &value;
    print(p);
    int tsum = getSum(arr, 5);
    
    cout << "Inside main: "<<p <<endl;
    update(p);
    cout << "Inside main: "<<p <<endl;

    cout <<  tsum <<endl;
    
    return 0;
}