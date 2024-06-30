#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Sample array
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5};

    // Map to store frequency of each element
    unordered_map<int, int> mp;

    // Count frequency of each element
    for (int element : arr) {
        mp[element]++;
    }

    unordered_map<int, int> :: iterator it = mp.begin();

    while(it!=mp.end()){
        cout << it->first << " " << it->second<<endl;
        it++;
    }
    

    // Find the maximum frequency
    int maxFreq = 0;
    for (auto& pair : mp) {
        maxFreq = max(maxFreq, pair.second);
    }

    // Find the element with maximum frequency
    int ans = -1;
    for (auto element : arr) {
        if (maxFreq == mp[element]) {
            ans = element;
            break;
        }
    }

    // Output the result
    if (ans != -1) {
        cout << "The element with the highest frequency is: " << ans << endl;
    } else {
        cout << "No element found." << endl;
    }

    return 0;
}
