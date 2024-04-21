#include <iostream>
#include "LinkedList.h"


int main(){
    LinkedList fc;
    fc.push_back(0);
    fc.push_back(1);
    fc.push_back(2);
    fc.push_back(3);
    fc.insert(99,2);
    fc.push_back(66);
    fc.push_front(333);
    fc.pop_front();
    fc.remove(3);

    fc.print_List();
}
