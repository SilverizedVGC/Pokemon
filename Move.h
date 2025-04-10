#ifndef MOVE_
#define MOVE_

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// implement stack functionality (e.g., undo last action for character)
class Move {
public:
	void action(string action);
	void undoAction();

	void emptyActions();
	
private:
	stack<string> actions; // "move list"
};

#endif