#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string full, string pattern)
{
    // jab tak full string k andar pattern string
    //  milti rahegi ,tab tak loop chalao
    while (full.find(pattern) != string::npos) // npos=-1
    {
        full.erase(full.find(pattern), pattern.length());
        // ist argument-ist index of pattern
        // 2nd argument-pattern ka size determine,
        // removes n characters starting at index ist arg
    }
    return full;
}

int main()
{
    string full, pattern;

    cout << "Enter the full string: ";
    cin >> full;

    cout << "Enter the pattern to remove: ";
    cin >> pattern;

    string result = removeOccurrences(full, pattern);

    cout << "String after removing pattern: " << result << endl;

    return 0;
}
