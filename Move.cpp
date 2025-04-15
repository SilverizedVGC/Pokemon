#include "Move.h"

void Move::action(string action) {
	actions.push(action);
	cout << "Added \"" << action << "\" to Move List." << endl;
}

void Move::undoAction() {
	if (actions.empty()) {
		cout << "No actions to undo." << endl;
		return;
	}
	else {
		cout << "Undid \"" << actions.top() << "\" from Move List." << endl;
		actions.pop();
	}
}

void Move::emptyActions() {
	cout << "Emptying Move List: ";
	while (!actions.empty()) {
		cout << actions.top() << " ";
		actions.pop();
	}
}
