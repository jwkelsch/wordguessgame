/*
 * Dictionary.cpp
 *
 *  Created on: Feb 5, 2021
 *      Author: chubs
 */
using namespace std;
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Dictionary.h"

	Dictionary::Dictionary(){}

	Dictionary::Dictionary(vector<string> v){
		_words = v;
	}

	void Dictionary::userPopulate(){
		string input;
		cout << "input a word into the dictionary: " << endl;
		cin >>input;
		while(input != "x"){
			_words.push_back(input);
			cout << "input x to finish, or input another word: " << endl;
			cin >> input;
		}
	}

	void Dictionary::filePopulate(){
		string filename;
		cout << "input file name: " << endl;
		cin >> filename;
		ifstream infile(filename);

		string readword;
		infile >> readword;
		while(!infile.eof()){
			_words.push_back(readword);
			infile >> readword;
		}
	}

	string Dictionary::randomWord(){

		int dictionarysize;
		dictionarysize = _words.size();
		int randomword =  rand() % dictionarysize;
		return _words[randomword];
	}



	//debugging
	void Dictionary::printDictionary(){
		for (int i=0; i<_words.size(); i++){
			cout << _words[i] << endl;
		}
	}
