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
            str[i] = toupper(str[i]);
        }
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}
