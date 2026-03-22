#include <iostream>
using namespace std;
void printCounting()
{
   for (int i = 1; i < 5; i++)
   {
      cout << i << " ";
   }
   cout << endl;
}
int main()
{
   printCounting();
   cout << "\nbarrar" << endl;

   printCounting();
   int a;
   cin >> a;
   cout << "the value of a:" << a << endl;

   printCounting();

   return 0;
}