#include "Item.h"
#include "ItemQueue.h"
#include "Inventory.h"
#include "Move.h"

#include <iostream>
using namespace std;

int main(){
    /*Item i1("poke ball", "captures pokemon", 5);
    Item i2("master ball", "captures difficult pokemon", 10);
    Inventory inven;
    inven.addItem(i1);
    inven.addItemAt(0, i2);
    inven.printIems();
    cout << endl<<"Remove Item: " << endl;
    inven.removeItem(0);
    inven.printIems();
    return 0;*/

    Move m;

    m.action("Tackle");
    m.action("Growl");
    m.action("Self Destruct");
    
    m.undoAction();
    m.emptyActions();

    cout << endl;

    ItemQueue q;
    
    Item i1("Potion", "Healing Item", 1);
    Item i2("Berry", "Healing Item", 2);
    Item i3("Poke Ball", "Catching Item", 3);
    Item i4("Fire Stone", "Evolution Item", 4);


    q.addItem(i1);
    q.addItem(i2);
    q.addItem(i3);

    q.removeItem();

    q.addItem(i4);

    cout << "Size of ItemQueue = " << q.size() << endl;

    return 0;
}