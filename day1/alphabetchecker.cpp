#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the letter: ";
    cin >> ch;
    
    bool isUpper = false;
    bool isLower = false;
    
    if (ch >= 'A' && ch <= 'Z') {
        isUpper = true;
    } else if (ch >= 'a' && ch <= 'z') {
        isLower = true;
    }
   
    cout << "Uppercase: " << isUpper << endl;
    cout << "Lowercase: " << isLower << endl;
    cout << "Not a letter: " << !(isUpper || isLower) << endl;

    return 0;
}