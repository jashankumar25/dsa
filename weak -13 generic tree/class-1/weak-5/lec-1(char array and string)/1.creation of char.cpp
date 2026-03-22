#include <iostream>
using namespace std;

int main()
{
    // creation
    char arr[100];

    // input-also (for loop) -not recommed in char
    cout << "Enter your name=";

    // cin>>arr;  ->love
    cin.getline(arr, 100); //->love hary

    // output
    cout << "your name is:" << arr << endl;

    // to verify last char -is null char through asciii val.
    cout << arr[0] << "->" << (int)arr[0] << endl;
    cout << arr[1] << "->" << (int)arr[1] << endl;
    cout << arr[2] << "->" << (int)arr[2] << endl;
    cout << arr[3] << "->" << (int)arr[3] << endl;
    cout << arr[4] << "->" << (int)arr[4] << endl;

    char arr1[100];
    cout << "enter input(use a delimiter)=" << endl;

    // cin >> arr1;
    cin.getline(arr1, 100, 'a'); // a-delimiter.-
    //'\t'--input read karga , tab tak delimiter hit nhi hota hai

    cout << "\nYou entered (till delimiter): " << arr1 << endl;

    return 0;
}