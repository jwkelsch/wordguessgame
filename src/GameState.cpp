/*
 * GameState.cpp
 *
 *  Created on: Feb 5, 2021
 *      Author: chubs
 */

using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include "GameState.h"

	GameState::GameState(){}

	void GameState::userGuess(string guess){
		//check if user guess is any of the word or letters

		for(int i=0; i<_currWord.length(); i++){
			if(guess[0] == _currWord[i]){              //if guess correct char, set specific dash to that char -- is this black magic?
				_dashes[i] = _currWord[i];
			}
			else if(guess == _currWord){       //if guess full word, makes _dashes(state of word) full word
				_dashes[i] = _currWord[i];
			}
		}
	}


	bool GameState::checkWin(string guess){
		if(_currWord == guess){
				//win game by guessing whole word (working)
				return true;
		}
		//check if _dashes has any dashes (unguessed letters) remaining or not
		string a = "- ";
		for(int i =0; i<_dashes.size(); i++){
			if(_dashes[i] == a){
				return false;
			}
		}
		for(int i =0; i<_dashes.size(); i++){
					if(_dashes[i] != a){
						return true;
			}
		}

		return false;
	}


	string GameState::getCurrWord(){
		return _currWord;
	}
	void GameState::setCurrWord(string s){
		_currWord = s;
	}


	void GameState::setGuessedWordsLetters(string s){     //do i have to apss by reference here for vector??
		_guessedWordsLetters.push_back(s);
	}
	void GameState::clearGuesses(){
		_guessedWordsLetters.clear();
	}
	void GameState::printGuessedWordsLetters(){
		cout << "guessed letters/words:   " << endl;
		for(int i =0; i<_guessedWordsLetters.size();i++){
			cout << _guessedWordsLetters[i] << " ";
		}
		cout << endl;
	}



	int GameState::getRemainingAttempts(){
		return _remainingAttempts;
	}

	void GameState::setRemainingAttempts(int a){
		_remainingAttempts = a;
	}



	void GameState::configDashes(){                         //initial dashes of word
		for(int i =0; i<(_currWord.length()); i++){
					_dashes.push_back("- ");
		}
	}

	void GameState::printDashes(){
		for(int i = 0; i<(_dashes.size()); i++){
			cout << _dashes[i];
		}
		cout << endl;
	}

	void GameState::clearDashes(){      //clear contents of dashes
		_dashes.clear();
	}



