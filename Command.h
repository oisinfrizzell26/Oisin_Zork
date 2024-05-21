#ifndef COMMAND_H_
#define COMMAND_H_

#include <string>
using namespace std;

class Command { // class definition for command
private:
	string commandWord;
	string secondWord;

public: // decalring methods that are public
	Command(string firstWord, string secondWord);
	string getCommandWord();
	string getSecondWord();
    bool isUnknown(); //checks if the command is unknown
	bool hasSecondWord();
};

#endif /*COMMAND_H_*/
