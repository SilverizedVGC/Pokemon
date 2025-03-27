#ifndef ITEM_QUEUE_H
#define ITEM_QUEUE_H
#include "Item.h"
#include <queue>
 

class ItemQueue{
    private:
    queue<Item> list;
    public:
    ItemQueue();
    void addItem();
    void removeItem();
    
};

#endif
