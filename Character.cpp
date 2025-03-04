#include "Character.h"

Character::Character(string n, string r, int h, int a, int d, int s) : name(n), region(r), health(h), defense(d), speed(s) {
}

string Character::getName(){
	return name;
}

string Character::getRegion(){
	return region;
}

int Character::getHealth(){
	return health;
}

int Character::getAttack(){
	return attack;
}

int Character::getDefense(){
	return defense;
}

int Character::getSpeed(){
	return speed;
}

void Character::printStats(){
	cout << "-----Stats------\n";
	cout << "Name: " << name << " Region: " << region << endl;
	cout << "Health: " << health << endl;
	cout << "Attack: " << attack << endl;
	cout << "Defense: " << defense << endl;
	cout << "Speed: " << speed << endl;
}

void Character::setName(string n){
	name = n;
}

void Character::setRegion(string r){
	region = r;
}

void Character::setHealth(int h){
	health = h;
}

void Character::setAttack(int a){
	attack = a;
}

void Character::setDefense(int d){
	defense = d
}

void Character::setSpeed(int s){
	speed = s;
}