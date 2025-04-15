#include "ItemQueue.h"
#include "Item.h"

ItemQueue::ItemQueue(){
    s = 0;
}

void ItemQueue::addItem(Item i){
    list.push(i);
    s++;
}


Item ItemQueue::removeItem(){
    Item first = list.front();
    list.pop();
    s--;
    return first;
}

Item ItemQueue::front(){
    Item first = list.front();
    return first;
}

int ItemQueue::size(){
    return list.size();
}

bool ItemQueue::isEmpty(){
    return list.empty();
}