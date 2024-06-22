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

    List.push_back(12);
    List.push_back(6);
    List.push_back(88);
    List.push_back(32);
    List.push_back(23);
    List.push_back(77);

    //int val = List.find(32);





    List.print_LinkedList();


    List.ChangeNode_value(999,List.find_Index(23));
    //  std:: cout<<     <<std::endl;

    //List.Bubble_Sort();
    List.print_LinkedList();

    //std:: cout<< List.find(32)<<std::endl;
    return 0;
}
