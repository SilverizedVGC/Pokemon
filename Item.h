#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item {
protected:
  string itemName;
  string itemDescription;
  int value;

public:
  Item(string name = "Default", string desc = "default", int val = 0);
  string getItemName();
  string getItemDescription();
  int getValue();
  void setItemName(string n);
  void setItemDescription(string desc);
  void setValue(int v);
  void print();
  bool operator==(const Item& other); 
  bool operator<(const Item& other); 
  bool operator>(const Item& other); 
  
};

// class Potion : public Item {
// public:
//   Potion();
//   Potion(string name, string desc, int val);
// };

#endif