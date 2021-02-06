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
	vector<string> _guessedWordsLetters;
	int _remainingAttempts;

public:
	GameState();
	void userGuess();
	void getCurrWord();
	void getWordState();
	void getGuessedWordsLetters();
	void getRemainingAttempts();
};

#endif /* GAMESTATE_H_ */
