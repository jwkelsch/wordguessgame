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
			if(guess[0] == _currWord[i]){              //is this black magic?
				_dashes[i] = _currWord[i];
			}
		}
			/*if(_currWord == guess){
				//win game
			}
			else{
							cout << "wrong guess" << endl;
						}*/

	}

	string GameState::getCurrWord(){
		return _currWord;
	}
	void GameState::setCurrWord(string s){
		_currWord = s;
	}

	vector<bool> GameState::getWordState(){
		return _wordState;
	}

	void GameState::setWordState(vector<bool> v){
		_wordState = v;
	}

	vector<string> GameState::getGuessedWordsLetters(){
		return _guessedWordsLetters;
	}

	void GameState::setGuessedWordsLetters(vector<string> v){     //do i have to apss by reference here for vector??
		_guessedWordsLetters = v;
	}

	int GameState::getRemainingAttempts(){
		return _remainingAttempts;
	}

	void GameState::setRemainingAttempts(int a){
		_remainingAttempts = a;
	}

	/*void GameState::displayDashes(){


		for(int i =0; i<(_currWord.length()); i++){
			_dashes.push_back("- ");

		}
		for(int i =0; i<_dashes.size(); i++){
			cout << _dashes[i];
		}
		cout << endl;

	}*/

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



