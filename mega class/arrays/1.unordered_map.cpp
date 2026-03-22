#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp; // key--rollno  value--desh _no
    // insertion
    mp[1] = 53; //---- desh_map ki 1(key) --> 53 desh number assign kr diya
    mp.insert({2, 57});
    mp[3] = 55;

    mp[2] = 57; // reassign hoga....

    // iterate--2 method hota hai..

    // i have to iterate over 3 entries
    // map me iterate krne k lyi, make a iterator

    unordered_map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        int key = it->first;
        int value = it->second;

        cout << "key:" << key << " " << "Value:" << value << endl;
    }
    // Method-2
    cout << "method-2" << endl;
    for (auto itt : mp) // itt is NOT an iterator, it is a pair.

    {
        int key = itt.first;
        int value = itt.second;

        cout << "key:" << key << " " << "value" << value << endl;
    }

    // find-searching-->table/map-bahat fast (avg case )=0(1) worst case -0(n)
    // 2 is key ..
    if (mp.find(2) != mp.end())
    {
        // found
        int val = mp[2];
        cout << "Found " << val << endl;
    }
    else
    {
        cout << "Not found" << endl;
        // not found
    }

    // delete
    mp.erase(2);
    cout << "after-erase--" << endl;
    for (auto itt : mp) // itt is NOT an iterator, it is a pair.

    {
        int key = itt.first;
        int value = itt.second;

        cout << "key:" << key << " " << "value" << value << endl;
    }
    cout << "after-erase of 2--find 2 again-" << endl;
    if (mp.find(2) != mp.end())
    {
        // found
        int val = mp[2];
        cout << "Found " << val << endl;
    }
    else
    {
        cout << "Not found" << endl;
        // not found
    }

    return 0;
}