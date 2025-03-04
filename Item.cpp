#include "Item.h"

Item::Item(string name, string desc, int val): itemName(name), itemDescription(desc), value(val){

}

string Item::getItemName(){
    return itemName;
}

string Item::getItemDescription(){
    return itemDescription;
}

int Item::getValue(){
    return value;
}
  
void Item::setItemName(string n){
    itemName = n;
}
  
void Item::setItemDescription(string desc){
    itemDescription = desc;
}
  
void Item::setValue(int v){
    value = v;
}

void Item::print(){
    cout << itemName << endl;
    cout << "Description: " << itemDescription << endl;
    cout <<"Value: " << value << endl;
}

bool Item::operator==(const Item& other){
    return (other.value == value && other.itemName == itemName && other.itemDescription == itemDescription);
}

bool Item::operator<(const Item& other){
    return value < other.value;
}

bool Item::operator>(const Item& other){
    return value > other.value;
}


