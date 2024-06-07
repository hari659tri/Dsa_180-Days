#include <iostream>
#include <cstring>

int main() {
    int hash[256] = {0};  // Initialize all elements to 0

    const char s[] = "example";
    const char t[] = "mapping";

    // Map characters from s to t
    for (int i = 0; s[i] != '\0'; ++i) {
        hash[s[i]] = t[i];
    }

    // Example usage: print mapped characters
    for (int i = 0; s[i] != '\0'; ++i) {
        std::cout << "Character '" << s[i] << "' is mapped to '" << (char)hash[s[i]] << "'" << std::endl;
    }

    // Example: print ASCII values in the hash table
    for (int i = 0; s[i] != '\0'; ++i) {
        std::cout << "ASCII value of '" << s[i] << "' (" << (int)s[i] << ") is mapped to ASCII value " << hash[s[i]] << " ('" << (char)hash[s[i]] << "')" << std::endl;
    }

    return 0;
}
