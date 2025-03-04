#include "Inventory.h"

Inventory::Inventory(){
    size = 0;
}

Inventory::Inventory(Item arr[], int s){
    size = s;
    for(int i = 0; i < s; i++){
        inventory.push_back(arr[i]);
    }
}
void Inventory::addItem(Item item){
    inventory.push_back(item);
    size++;
}
void Inventory::removeLastItem(){
    inventory.pop_back();
}

void Inventory::addItemAt(int idx, Item element){
    if(inventory.max_size() == size){
        inventory.resize(size*2);
    }
    size++;
    for(int j = size-1 ; j > idx; j--){
        inventory[j] = inventory[j-1];
    }
    inventory[idx] = element;
}

void Inventory::removeItem(int idx){
    for(int i = idx; i+1 > size; i++){
        inventory[i] = inventory[i+1];
    }
    size--;
}

void Inventory::printIems(){
    for(int i = 0; i < size; i++){
        inventory.at(i).print();
    }
}
