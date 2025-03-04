#include "Item.h"
#include "Inventory.h"

using namespace std;

int main(){
    Item i1("poke ball", "captures pokemon", 5);
    Item i2("master ball", "captures difficult pokemon", 10);
    Inventory inven;
    inven.addItem(i1);
    inven.addItemAt(0, i2);
    inven.printIems();
    cout << endl<<"Remove Item: " << endl;
    inven.removeItem(0);
    inven.printIems();
    return 0;

}