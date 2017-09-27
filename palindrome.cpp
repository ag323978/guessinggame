// Author: Aryan Gupta
// Date: 9/25/2017
/* This program takes an input from a user, removes all punctuation and spaces to then reverse it to see if it is
   the same backwards as it is forwards. This is called a palindrome.
   
   --- An example of a palindrome is "racecar" ---

*/

// includes
#include <iostream>
#include <cstring>

using namespace std;

// main method
int main() {

  // array for storing the users input
  char userInput[80];
  cout << "User input array: ";
  cin.get(userInput, 80);
  cin.get();

  // array that has same data as userInput that will later be reversed
  char copyArray[80];
  // copy userInput into this array
  strcpy(copyArray, userInput);
  cout << "The user input was copied into this array: " << copyArray << endl;

  for(int i = 0; i < strlen(userInput); i++) {
    for(int j = strlen(userInput) - 1; j > -1; j--) {
      char temp = ' ';
      temp = copyArray[j];
      copyArray[j] = userInput[i];
      userInput[i] = temp;
      
    }
  }
  cout << copyArray << endl;
  
}