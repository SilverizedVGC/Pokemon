#include "Inventory.h"

Inventory::Inventory(){}

Inventory::Inventory(Item arr[], int s){

    for(int i = 0; i < s; i++){
        inventory.push_back(arr[i]);
    }
}
void Inventory::addItem(Item item){
    inventory.push_back(item);
}
void Inventory::removeLastItem(){
    inventory.pop_back();
}

void Inventory::addItemAt(int idx, Item element){
    if (idx < 0 || idx >= inventory.size() ) {
        throw std::out_of_range("Index is out of bounds");;
    }
    inventory.insert(inventory.begin()+ idx, element);

}

void Inventory::removeItem(int idx){
    if (idx < 0 || idx >= inventory.size() ) {
        throw std::out_of_range("Index is out of bounds");;
    }
    inventory.erase(inventory.begin() + idx);
}

void Inventory::printIems(){
    cout << inventory.size() << endl;
    for(int i = 0; i < inventory.size(); i++){
        inventory.at(i).print();
    }
}
