#include <iostream>
using namespace std;
int getMultiplication(int x, int y, int z)
{
    int result = x * y * z;
    return result;
}
void printMyNamesTenTimes()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "jashan here" << " ";
    }
}
void printMultiples(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num * i << " ";
    }
    return; // void me without return val use kar skta hai
}
int convertIntoCelsius(int far)
{
    int celsius = (far - 32) * 5 / 9;
    return celsius;
}
char ConvertIntoUpperCase(char ch)
{
    char answer = ch - 'a' + 'A';
    return answer;
}
int main()
{
    int multiplication = getMultiplication(5, 4, 3); // arguments
    cout << multiplication << endl;

    printMyNamesTenTimes();
    int val = 5;
    cout << endl;
    printMultiples(val);
    int far = 32;
    int ans = convertIntoCelsius(far);
    cout << "\nin celsius:" << ans << endl;

    char result = ConvertIntoUpperCase('e');// imp points figure out.
    cout << "alphabet:" << result;

    return 0;
}
