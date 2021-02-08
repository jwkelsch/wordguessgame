//============================================================================
// Name        : wordguessgame.cpp
// Author      : Jackson Kelsch
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include "Dictionary.h"
#include "Player.h"
#include "GameState.h"


int main() {
	//state: private member vars
	//behavior: public functions


	Dictionary d;
	//user input choice
	int popchoice;
	cout << "input 1 to populate words manually, or 2 to populate words from a file: " << endl;
	cin >> popchoice;
	switch(popchoice){
	case 1:
		cout << "case 1";
		d.userPopulate();
		break;
	case 2:
		cout << "case 2";
		//pop from file
		d.filePopulate();
		break;
	}
	//cout << b.randomWord();
	d.printDictionary();
//Dictionary has been populated

//prompt user to play game or not
	cout << "input 1 to play a game: " << endl;
	int playChoice = 0;
	cin >> playChoice;
	GameState g;
	Player p;
	string guess;

	while (playChoice == 1){
		g.setCurrWord(d.randomWord());        //sets gamestate current game word to a random word from the dictionary
		g.setRemainingAttempts(g.getCurrWord().length());
		g.configDashes();
		g.printDashes();

		bool playing = true;
		while(playing){
		//show word as space w/dashes
		cout << g.getCurrWord() << endl;




		cout << "guess a letter or word: " << endl;
		cin >> guess;

		if(guess == g.getCurrWord()){
					playing = false;                //if guess word, done playing current game
					g.clearDashes();                //empties dashes vector for use during next game
					cout << "you have guessed the word!" << endl;
					cout << endl;

		}
		else{
		g.userGuess(guess);
		g.printDashes();
		g.setRemainingAttempts(g.getRemainingAttempts()-1);
		cout << "remaining attempts: " << g.getRemainingAttempts() << endl;
		if(g.getRemainingAttempts() == 0){
			cout << "you have ran out of guesses!" << endl;
			cout << endl;
			playing = false;

		}

		}



		}
















		//prompts user if they want to play again, or exit program
		cout << "input 1 to play again, or 2 to exit: " << endl;
		cin >> playChoice;
		if(playChoice != 1){
			cout << "thanks for playing";
		}
	}









	return 0;
}
