// These are libraries
#include <iostream> //library for COUT and CIN, the objects we use for Output and Input respectively
#include <time.h> //Contains the rand, srand, and time variables, functions, and objects
#include <string> //Contains functions for the string data type
using namespace std; //allows me to specify data types and standard functions without std:: infront

int main() //typical starting function. This is called in almost every base cpp program
{
	int Result, Sides; //integers
	string Dice; //string to store the users input

	cout << "Enter the type of dice to be rolled (example d20): "; //Output to the Command Line
	cin >> Dice; //Command Line waiting for Input

	/*
		This does a few things:
		substr - Takes the substring of the Dice variables,
				 such that we remove the 'd' from the front of the Dice variable
		stoi   - Converts the resulting string into an integer
		Sides= - Assings the resulting integer on the right to the Sides variable on the left
	*/
	Sides = stoi(Dice.substr(1, Dice.length()-1));

	//Initializes random seed based on time, almost guarantees complete randomness (to some degree)_
	srand(time(NULL));

	/* Rolls the dice */
	//rand() generates a randon number between 0 and RAND_MAX based on the seed
	// Sides is the inputed number of dice sides
	// % is the modulo operator. Google it. We add +1 to take it from a range of 0 to (Sides-1) ->  1 to Sides
	Result = (rand() % Sides) + 1;
	cout << "You rolled a " << Dice << ": " << Result << endl; //Output the result
	return 0; //Complete the program successfully
}
