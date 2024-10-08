// String methods in cpp - find() & erase()

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, world!";
    string substr = "world";

    // Using find to search for the substring
    size_t found = str.find(substr); 

    // finds starting index of the substr.
    cout<<found<<endl;
    
    

    cout << newstr <<endl;

    if (found != std::string::npos) {
        std::cout << "Substring found at index: " << found << std::endl;
    } else {
        std::cout << "Substring not found!" << std::endl;
    }

      // s.erase(starting index, how many characters)
    string newstr = str.erase(str.find(substr), str.length());

   
    return 0;
}
