/* SkyNet Search and Destroy 
* 
* Joseph Marquez
* CSC215
* UAT
* June 1st 2021
* Assignment - Create a search program that searches a grid for enemy with a random search pattern
* 
*/

// Hint example program only used 62 lines of code. 
// We will be using while loops and if else statments.
// Dont forget to create a GitHub Account and upload it there
// Ask tutor for assistaince 

// This is where I include the Libs I will need

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>


// This is where im going to add my variables
using namespace std;

int targetPrediction;
int serchGridForHighNumber = 64;
int serchGridLowNumber = 1;
string theArray[63];

int main()
{
	srand(time(0));

	int answer = rand() % 64 + 1;

	bool isSolved = false;

	int tTry = 1;


	cout << "Welcome to the SkyNet Search and Destroy Simulation Program.. \n ";
	cout << "SkyNet works by searching a grid with random search patterns in order to eliminate the target!\n ";
	cout << "For this demonstration we have setup an grid with 64 target contact possibilities for SkyNet to search and destroy.\n ";
	cout << "Let's get her started, SkyNet Identify peramiters,\n";
	cout << "SkyNet Answers... ... The enemy is in an 8x8 grid #" << answer << "\n";
	cout << "SkyNet execute program Hide and Seek\n";
	cout << "Skynet Answers .. .. Affermative, Executing Search and Destry in 8x8 grid Alpha 1\n";
	cout << "Now SkyNet will send us live updates as it searches Alpha 1 to this monitor, lets see what she finds.\n\n\n";


	while (!isSolved) // creating loop
	{
		int targetPrediction = ((serchGridForHighNumber - serchGridLowNumber) / 2 ) + serchGridLowNumber;
		if (targetPrediction == answer)
		{
			cout << "Searching Target position Alpha 1 Target Identified! Attempt #" << tTry << "\n"; // if inttargetPrediction = true then cout this string
			cout << "The Target has been destroyed\n\n\n"; 
			isSolved = true;

						}

		else if (targetPrediction > answer) // gess is to large do this
		{
			cout << "Negative, Target Grid Apha 1 Attempt # " << tTry << "\n";
			cout << "Updating Grid Data, calculations complete, TPA (Target Prediction Algorythem) Predicts Target at Lower Grid Point\n\n";
			serchGridForHighNumber = targetPrediction; 


		}

		else if (targetPrediction < answer) // if guess is to low do this
		{
			cout << "Negative, Updating Grid Data, Target Grid Apha 1 Attempt # " << tTry << "\n";
			cout << "TPA (Target Prediction Algorythem) predicts enemy to be in higher grid point\n\n";
			serchGridLowNumber = targetPrediction;


		}

		tTry++; // This is the incroment operator and increasses by 1 with every try 

	}


	return 0;

}



int score;
