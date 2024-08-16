#include <iostream>
using namespace std;

void sayDigit(int n, string *arr){

    //base Case
    if(n==0)
        return;
    
    //processing
    int digit = n%10;
    n /= 10;

    //recursive call
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
int main() {
    int n;
    string arr[10]= {"zero","one", "two", "three",
                    "four", "five", "six", "seven",
                                    "eight", "nine"};
    cin >> n;

    sayDigit(n, arr);
    return 0;
}