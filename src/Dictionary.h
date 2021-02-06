/*
 * Dictionary.h
 *
 *  Created on: Feb 5, 2021
 *      Author: chubs
 */

#ifndef DICTIONARY_H_
#define DICTIONARY_H_

class Dictionary {

private:
	vector<string> _words;

public:
	Dictionary();                     //default constructor (); vs (){}?
	Dictionary(vector<string> v);
	void userPopulate();
	void filePopulate();
	string randomWord();
};

#endif /* DICTIONARY_H_ */
