/*
 * Player.h
 *
 *  Created on: Feb 5, 2021
 *      Author: chubs
 */

#ifndef PLAYER_H_
#define PLAYER_H_

class Player {

private:
	string _playerName;
	int _numWins;
	int _numLosses;
public:
	Player();
	Player(string name, int wins, int losses);

	void setName(string n);
	string getName();

	void setWins(int w);
	int getWins();

	void setLosses(int s);
	int getLosses();

};

#endif /* PLAYER_H_ */
