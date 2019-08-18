#include <iostream>
#include <string>      // Supports use of "string" data type
using namespace std;

int main() {
   int    userInt;
   double userDouble;
   char userChar;
   string userString;
   int newUser;
   
   cout << "Enter integer:" << endl;
   cin  >> userInt;
   
   
   cout << "Enter double:" << endl; 
   cin >> userDouble;
   
   cout << "Enter character:" << endl;
   cin>> userChar;
   
   cout << "Enter string:" << endl;
   cin >> userString;
   
   //  output the four values on a single line separated by a space
   cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;
   
    //Output the four values in reverse
   cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;
 
    // Cast the double to an integer, and output that integer 
   newUser = static_cast<int>(userDouble);
   
   cout << userDouble << " cast to an integer is " << newUser << endl; 
  
   return 0;
}
