#include <iostream>
using namespace std;

int main() {
  int a, b, num, bits;
  cout << "Enter the value of a and b " << endl;
  cin >> a >> b;
  cout << "The value of " << a << " And " << b << " is : " << (a & b) << endl;
  cout << "The value of " << a << " Or " << b << " is : " << (a | b) << endl;
  cout << "The value of " << a << " XOr " << b << " is : " << (a ^ b) << endl;

  cout << "Enter a number to perform right and left shift: ";
  cin >> num;
  cout << "How many bits? " << endl;
  cin >> bits;
  cout <<"Right shift: "<< (num >> bits) << endl;
  cout << "Left shift: "<< (num << bits) << endl;

  return 0;
}