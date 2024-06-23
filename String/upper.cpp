#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Convert each character to uppercase
    for (int i = 0; i < str.length(); i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting the difference between 'a' and 'A'
            str[i] = str[i] - ('a' - 'A');
        }
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}
