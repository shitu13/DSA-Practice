#include <iostream>
#include <algorithm> // for std::find
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int* found = find(numbers, numbers + 5, 30); // Searches for the element 30

    if (found != numbers + 5) {
        cout << "Element found at position: " << (found - numbers) << endl;
    } else {
        cout << "Element not found" << endl;
    }
    // Output: Element found at position: 2 (index is 2, 0-based index)
    return 0;
}
