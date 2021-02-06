/*
 * Player.cpp
 *
 *  Created on: Feb 5, 2021
 *      Author: chubs
 */

using namespace std;
#include <string>


#include "Player.h"

	Player::Player(){}

	Player::Player(string name, int wins, int losses){
		_playerName = name;
		_numWins = wins;
		_numLosses = losses;
	}

	void Player::setName(string n){
		_playerName = n;
	}
	string Player::getName(){
		return _playerName;
	}

	void Player::setWins(int w){
		_numWins = w;
	}
	int Player::getWins(){
		return _numWins;
	}

	void Player::setLosses(int s){
		_numLosses = s;
	}
	int Player::getLosses(){
		return _numLosses;
	}
