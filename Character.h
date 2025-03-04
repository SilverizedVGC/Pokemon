#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

class Character {
protected:
    string name;
    string region;
    int health, attack, defense, speed;
    Inventory inventory;

public:
    Character(string n = "Ash", string r = "Kanto", int h = 0, int a = 0, int d = 0, int s = 0);
    string getName();
    string getRegion();
    int getHealth();
    int getAttack();
    int getDefense();
    int getSpeed();
    void printStats();
    void setName(string n);
    void setRegion(string r);
    void setHealth(int h);
    void setAttack(int a);
    void setDefense(int d);
    void setSpeed(int s);
};


#endif
