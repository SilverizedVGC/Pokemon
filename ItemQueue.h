#ifndef ITEM_QUEUE_H
#define ITEM_QUEUE_H
#include "Item.h"
#include <queue>
 
class ItemQueue{
    private:
    queue<Item> list;
    int s;
    public:
    ItemQueue();
    void addItem(Item i);
    Item removeItem();
    Item front();
    int size();
    bool isEmpty();
};

#endif
