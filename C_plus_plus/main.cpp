#include <iostream>
#include "LinkedList.h"
#include "random"

int main() {
    LinkedList<int> List;

    List.push_back(12);
    List.push_back(11);
    List.pop_back();
    List.insert(1,1);
    List.push_front(1);
    List.pop_front();

    List.push_back(12);
    List.push_back(6);
    List.push_back(88);
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());
    List.push_back((int)rand());







    List.print_LinkedList();

    //List.remove_value_Allnode(12);
    List.move_node(1,9+1);

    List.print_LinkedList();


//    std:: cout<<List.Get_Intermediate_NodeIndex()<<std::endl;
//    std:: cout<<List.Get_Intermediate_NodeValue()<<std::endl;
    return 0;
}
