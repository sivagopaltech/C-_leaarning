//============================================================================
// Name        : helloworld.cpp
// Author      : sivagopal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string value = "this is a string";
	cout << "!!!Hello there World!!!" << endl; // prints !!!Hello World!!!
	cout << "hi" << "hello" << "how are you" << endl;
	cout << "this is a test" << endl;
	int numberOfCats = 5;
	cout << "number of cats " << numberOfCats << endl;
	cout << value << endl;
	cout << "please enter your name:";
	string name;
	cin >> name;
	cout << "you have entered :" << name << endl;
	int age;
	cout << "please enter your age:";
	cin >> age;

	cout << "you age is :" << age << endl;
	return 0;
}
