#include <iostream>
#include <string>

using namespace std;



int main () {
   string cardNum;
   string newDigits = "";
   int total = 0;
   while(true)
   {
      newDigits = "";
      total = 0;
      cout << "card number to check: ";
      cin >> cardNum;
      if(cardNum == "exit")
      {
         break;
      }
      if(cardNum.length() == 16)
      {
         //go ahead
         
         for(int i = 0; i < 16; i++)
         {
            if(i % 2 == 0)
            {
               newDigits += to_string((cardNum[i] - '0') * 2);

            }
            else
            {
               newDigits += cardNum[i] ;
            }
         }
         //cout << newDigits << endl;
         for(int i = 0; i < newDigits.length(); i++)
         {
         total += newDigits[i] - '0';
         }
         //cout << total << endl;

         if(total % 10 == 0)
         {
            cout << "Valid" << endl;
         }
         else
         {
            cout << "Not Valid" << endl;
         }

      }
      else
      {
         //stop
         cout << "Not 16 digits" << endl;
      }
   }
   return -1;
}