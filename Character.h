#ifndef CHARACTER_H
#define HARACTER_H

#include <string>
using namespace std;


class Character{
    protected:
    string name, region;
    int hp, attack_stat, defense_stat, speed;
    public:
    Character(string n = "Ash", string region = "Kanto", int d = 0, int );
    

};

#endif