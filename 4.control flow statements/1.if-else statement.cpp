#include <iostream>
using namespace std;
int main()
{
   int budget;
   cout << "enter your budget :";
   //-input
   cin >> budget;

   if (budget > 200000)
   {
      cout << "u can buy scorpio";
   }
   else
   {
      cout << "u canot buy scorpio";
   }

   int age;
   cout << "\nenter your age :";
   //-input
   cin >> age;
   if (age > 18)
   {
      cout << "u can vote" << endl;
   }
   else
   {
      cout << "u cannot vote" << endl;
   }

   return 0;
}