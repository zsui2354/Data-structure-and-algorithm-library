#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> List;

    List.push_back(12);
    List.push_back(11);
    List.pop_back();
    List.insert(1,1);
    List.push_front(1);
    List.pop_front();
    List.remove(1);



    List.print_LinkedList();
    return 0;
}
