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

	}
	string Dictionary::randomWord(){

	}
