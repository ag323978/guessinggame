# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main() {

  //input variable
  int input = 0;
  //keeps track of number of guesses
  int counter = 0;

  //random number generator seed
  srand(time(NULL));

  //generate random number between 0-100 inclusive
  int randNum = rand() % 101;
  
  cout << "A random number was generated. Time to guess! ";

  //keep guessing until guess is correct
  while (true) {
    cin >> input;
    counter ++;
    //if guess is too high 
    if (input > randNum) {
      cout << "The number you guessed is higher than the random number. Guess again: ";
    } // if guess is too low
    else if (input < randNum) {
      cout << "The number you guessed is lower than the random number. Guess again: ";
    } //otherwise you guessed the random number correctly
    else {
      cout << "The number you guessed is the random number! ";
      if (counter == 1) {
	cout << "It took you " << counter << " guess." << endl;
      } else {
	cout << "It took you " << counter << " guesses." << endl;
      }
      //ask user if they want to play again
      cout << "Do you want to play again? Type y/n: ";
      char character;
      cin >> character;
      //generate another random number if they answer yes
      if (character == 'y') {
	randNum = rand() % 101;
	cout << "A random number was generated. Time to guess! ";
      } //otherwise break out of loop
      else {
	break;
      }
    } 
  }
}
