#include <iostream>
#include <string>
#include <ctime>
#include <random>

using namespace std;

//function to generate a random number within a given range
int getRandomNumber(int min, int max) {
	std::random_device rd;
	std::mt19937 generator(rd());
	std::uniform_int_distribution<int> distribution(min, max);
	return distribution(generator);
}

//Function to choose a random game
std::string chooseRandomGame() {
	//List of games
	std::string Games[] = {
		"Red Dead Redemption 2",
		"Death Stranding",
		"Dragon Age 2",
		"Spiderman Remastered",
		"Horizon Zero Dawn",
		"RimWorld"
		"Prototype"
	};
	//Get the total nimber of games
	int numberofGames = sizeof(Games) / sizeof(Games[0]);

	//Generate a random index to choose a game
	int randomIndex = getRandomNumber(0, numberofGames - 1);

	return Games[randomIndex];
}

int main() {
	//seed the random number generator with the current time
	srand(time(0));

	//call the function to choose a random game
	string selectedGame = chooseRandomGame();

	//display the randomly chosen game
	cout << "The Next Game To Play Is: " << selectedGame << endl;

	return 0;

}