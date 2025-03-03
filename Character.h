#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    string name;
    string region;
    int health, attack, defense, speed;
    int Inventory[9];

public:
    Character(string n = "Ash", string r = "Kanto", int h = 0, int a = 0, int d = 0, int s = 0);
};

class Item {
protected:
    string itemName;
    string itemDescription;
    int value;

public:
    Item();
    Item(string name, string desc, int val);
};

class Potion : public Item {
public:
    Potion();
    Potion(string name, string desc, int val);
};

#endif
