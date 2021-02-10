/*
 * GameState.h
 *
 *  Created on: Feb 5, 2021
 *      Author: chubs
 */

#ifndef GAMESTATE_H_
#define GAMESTATE_H_

class GameState {

private:
	string _currWord;
	//current word

	vector<string> _dashes;
	//wordstate

	vector<string> _guessedWordsLetters;
	//vector of user's guessed words and letters for their current game

	int _remainingAttempts;


public:
	GameState();

	void userGuess(string guess);
	//pre: user calls function and passes in their guessed word or letter
	//post: changes _dashes(current wordstate) to check if their guess matches any of the current words letters or the whole word


	bool checkWin(string guess);
	//pre: user passes in current guess to check if they have won the game
	//(checks whole word guess, and if guessed whole word by a single letter-- if no dashes are remaining)
	//post: returns true if won the game, false if not

	string getCurrWord();
	void setCurrWord(string s);


	void printGuessedWordsLetters();
	void setGuessedWordsLetters(string s);           //do i have to pass by reference here for vector??

	void clearGuesses();
	//pre: call function to clear vector of guessed inputs
	//post: _guessedwordsletters vector is cleared for next game

	int getRemainingAttempts();
	void setRemainingAttempts(int a);



	void configDashes();
	//pre: call function to initialize _dashes wordstate
	//post: _dashes is configured for its inital amount of dashes depending on the length of the current word

	void printDashes();
	//pre: call function to display state of current word
	//post: current word is displayed, dashes indicating a non guessed letter/word, and correct letters are in their designating spot

	void clearDashes();
	//pre: call function with populated state of word
	//post: _dashes vector(populated state of word) is cleared for another game


};

#endif /* GAMESTATE_H_ */
