#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
void reverseStr(string& str) {
    int n = str.size()-1;
    int i = 0;
    while (i <= n) {
        swap(str[i], str[n]);
        n--;
        i++;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  

    reverseStr(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}
