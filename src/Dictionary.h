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
	//pre: call function to populate diction of words via console
	//post: vector of words is populated

	void filePopulate();
	//pre: call function to populate dictionary from a .txt file
	//post: vector of words is populated

	string randomWord();
	//pre: call function to find a random word
	//post: random word from the populated dictionary is returned


};

#endif /* DICTIONARY_H_ */
