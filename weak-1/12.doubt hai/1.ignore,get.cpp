#include <iostream>
using namespace std;

int main() {
    char first, last;
    cout << "Enter your full name: ";
    
    first = cin.get(); // get first character
    cin.ignore(5, ' '); // ignore characters until a space is found
    last = cin.get(); // get one character after space
    
    cout << "Your initials are: " << first << last << '\n';
    return 0;
}
