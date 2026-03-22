#include <iostream>
#include <cmath>
using namespace std;

int decimalTOBinaryMethod1(int n)
{
  // division method
  int binaryNo = 0;
  int i = 0;
  while (n > 0)
  {
    int bit = n % 2;
    binaryNo = bit * pow(10, i++) + binaryNo;
    n = n / 2;
  }
  return binaryNo;
}
int decimalTOBinaryMethod2(int n)
{
  // BITWISE  method
  int binaryNo = 0;
  int i = 0;
  while (n > 0)
  {
    int bit = (n & 1);
    binaryNo = bit * pow(10, i++) + binaryNo;
    n = n >> 1;
  }
  return binaryNo;
}

int main()
{
  int n;
  cin >> n;
  int binary = decimalTOBinaryMethod1(n);
  cout << " decimal method--" << binary << endl;

  int bin = decimalTOBinaryMethod2(n);
  cout << "bitwise method--" << bin << endl;

  return 0;
}