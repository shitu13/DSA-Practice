#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

int main() {
    int numbers[5] = {50, 30, 20, 40, 10};
    sort(numbers, numbers + 5); // Sorts the array in ascending order

    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    // Output: 10 20 30 40 50
    return 0;
}
