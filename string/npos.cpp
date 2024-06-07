#include <iostream>
#include <string>

int main() {
    // Define a string
    std::string str = "Hello, world!";
    
    // Search for a substring
    size_t pos = str.find("world");  // also you can used int data type here instead of size_t
    if (pos != std::string::npos) {
        std::cout << "Substring 'world' found at position " << pos << std::endl;
    } else {
        std::cout << "Substring 'world' not found in the string." << std::endl;
    }
    
    // Search for a single character
    char ch = 'o';
    pos = str.find(ch);
    if (pos != std::string::npos) {
        std::cout << "Character 'o' found at position " << pos << std::endl;
    } else {
        std::cout << "Character 'o' not found in the string." << std::endl;
    }
    
    return 0;
}
