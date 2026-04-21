#include <iostream>
using namespace std;

void checkCase(char b) {
    if (b >= 'A' && b <= 'Z')
        cout << "Uppercase letter" << endl;
    else if (b >= 'a' && b <= 'z')
        cout << "Lowercase letter" << endl;
    else
        cout << "Not a letter" << endl;
}

int main() {
    char b;

    cout << "Enter a character: ";
    cin >> b;

    checkCase(b);

    return 0;
}
