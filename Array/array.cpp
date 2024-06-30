#include<bits/stdc++.h>
using namespace std;

int main(){
    // Initializing during declaration
    int numbers[5] = {10, 20, 30, 40, 50};

// Initializing later using a loop
    int numbers[5];
    for (int i = 0; i < 5; ++i) {
        numbers[i] = (i + 1) * 10;
    }

// Initializing explicitly
    char vowels[5];
    vowels[0] = 'a';
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';

    int numbers[5] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculates the number of elements in numbers

    int numbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    // Output: 10 20 30 40 50

    int numbers[5] = {10, 20, 30, 40, 50};
    numbers[2] = 35; // Changes the third element (index 2) to 35
    return 0;
}
