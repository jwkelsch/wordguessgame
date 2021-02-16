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
		d.userPopulate();
		break;
	case 2:
		d.filePopulate();
		break;
	}


//Dictionary has been populated

//prompt user to play game or not
	cout << "input 1 to play a game: " << endl;
	int playChoice = 0;
	cin >> playChoice;
	GameState g;
	Player p;
	string guess;
	int losses = 0;
	int wins = 0;
	p.setWins(wins);
	p.setLosses(losses);



	while (playChoice == 1){
		g.setCurrWord(d.randomWord());        //sets gamestate current game word to a random word from the dictionary
		g.setRemainingAttempts(g.getCurrWord().length());
		g.configDashes();
		g.printDashes();
		//initial game config done

		bool playing = true;
		while(playing){
			cout << endl;
			cout << "guess a letter or word: " << endl;
			cin >> guess;
			g.setGuessedWordsLetters(guess);                  //adds guess to guessed words and letters vector
			g.userGuess(guess);
			cout << endl << "********************" << endl;
			g.printDashes();
			g.printGuessedWordsLetters();

		//check if user has won before continuing
		if(g.checkWin(guess)){
			cout << "you have guessed the word!" << endl;
			cout << endl;
			wins++;
			p.setWins(wins);
			g.clearDashes();                //empties dashes vector for use during next game
			g.clearGuesses();
			playing = false;
		}

		else{
			g.setRemainingAttempts(g.getRemainingAttempts()-1);
			cout << "remaining attempts: " << g.getRemainingAttempts() << endl;


		if(g.getRemainingAttempts() == 0){
			cout << "you have ran out of guesses!" << endl;
			cout << "the correct word was: " << g.getCurrWord() << endl;
			cout << endl;
			losses++;
			p.setLosses(losses);
			g.clearDashes();                //empties dashes vector for use during next game
			g.clearGuesses();
			playing = false;
			}
		}
	}

		//prompts user if they want to play again, or exit program
		cout << "input 1 to play again, or 2 to exit: " << endl;
		cin >> playChoice;
		if(playChoice != 1){
			cout << endl;
			cout << "thanks for playing" << endl;
			cout << endl;
			cout << "number of wins: " << p.getWins() << endl;
			cout << "number of losses: " << p.getLosses() << endl;
		}
	}

	return 0;
}
