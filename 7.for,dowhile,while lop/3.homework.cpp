#include <iostream>
using namespace std;
int main()
{

   cout << "1.print number 1-to -100\n";
   for (int i = 1; i <= 100; i = i + 1)
   {
      cout << i << " ";
   }
   cout << "\n2.print number 100 -t0-1\n";
   for (int i = 100; i >= 1; i = i - 1)
   {
      cout << i << " ";
   }
   cout << "\n3.print name 50 times \n";
   // for(int i=100;i>=50;i=i-1) or
   for (int i = 1; i <= 50; i++)
   {
      cout << " jashan" << "";
   }
   cout << "\n4..print number 0 -t0-10\n";
   for (int j = 0; j >= -10; j = j - 1)
   {
      cout << j << " ";
   }
   cout << "\n5..print  7 ka table \n";
   for (int i = 1; i <= 10; i = i + 1)
   {
      // cout << i * 7 << " ";
      cout << " 7 * " << i << " = " << 7 * i << endl;
   }
   cout << "\n6.print captical aplnabet-a to z-";
   for (char ch = 'A'; ch <= 'Z'; ch = ch + 1)
   {
      cout << ch << " ";
   }
   cout << "\n7..print small aplnabet-a to z-";
   for (char ch = 'a'; ch <= 'z'; ch = ch + 1)
   {
      cout << ch << " ";
   }

   return 0;
}