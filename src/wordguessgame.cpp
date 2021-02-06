//============================================================================
// Name        : wordguessgame.cpp
// Author      : Jackson Kelsch
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include "Dictionary.h"


int main() {
	//state: private member vars
	//behavior: public functions


	Dictionary b;
	//user input choice
	int popchoice;
	cout << "input 1 to populate words manually, or 2 to populate words from a file: " << endl;
	cin >> popchoice;
	switch(popchoice){
	case 1:
		cout << "case 1";
		b.userPopulate();
		break;
	case 2:
		cout << "case 2";
		//pop from file
		b.filePopulate();
		break;
	}

	b.printDictionary();

	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();
	cout << b.randomWord();







	return 0;
}
