#include <iostream>
using namespace std;
int main()
{
   int height;
   cout << "enter your  height :";
   //-input
   cin >> height;

   int weight;
   cout << "enter your  weight :";
   //-input
   cin >> weight;

   if (height > 5)
   {
      if (weight > 70)
      {
         cout << " u are a good BMI";
      }
      else
      {
         cout << "weight kaam hi ha ";
      }
   }
   else
   {
      cout << "complan pilaa do" << endl;
   }

   return 0;
}