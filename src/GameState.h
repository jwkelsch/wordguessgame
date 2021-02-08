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
	vector<bool> _wordState;
	vector<string> _dashes;
	vector<string> _guessedWordsLetters;
	int _remainingAttempts;

public:
	GameState();
	void userGuess(string guess);

	string getCurrWord();
	void setCurrWord(string s);

	vector<bool> getWordState();
	void setWordState(vector<bool> v);

	vector<string> getGuessedWordsLetters();
	void setGuessedWordsLetters(vector<string> v);           //do i have to apss by reference here for vector??

	int getRemainingAttempts();
	void setRemainingAttempts(int a);

	void displayDashes();
	void configDashes();
	void printDashes();
	void clearDashes();



};

#endif /* GAMESTATE_H_ */
