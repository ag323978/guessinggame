# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main() {

  int input = 0;
  int counter = 0;

  srand(time(NULL));
  
  int randNum = rand() % 101;
  
  cout << "A random number was generated. Time to guess! ";

  while (true) {
    cin >> input;
    counter ++;
    if (input > randNum) {
      cout << "The number you guessed is higher than the random number. Guess again: ";
    } else if (input < randNum) {
      cout << "The number you guessed is lower than the random number. Guess again: ";
    } else {
      cout << "The number you guessed is the random number! ";
      if (counter == 1) {
	cout << "It took you " << counter << " guess." << endl;
      } else {
	cout << "It took you " << counter << " guesses." << endl;
      }
      cout << "Do you want to play again? Type y/n: ";
      char character;
      cin >> character;
      if (character == 'y') {
	randNum = rand() % 101;
	cout << "A random number was generated. Time to guess! ";
      } else {
	break;
      }
    } 
  }
}
