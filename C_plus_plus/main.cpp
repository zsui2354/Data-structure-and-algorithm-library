#include <iostream>
#include "LinkedList.h"
#include "random"





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */



int main() {
    LinkedList<int> List ;







//    List.push_back(12);
//    List.push_back(11);
//    List.pop_back();
//    List.insert(1,1);
//    List.push_front(1);
//    List.pop_front();
//    List.push_back(12);
//    List.push_back(6);
//    List.push_back(88);
//    List.push_back((int)rand());
//    List.push_back((int)rand());
//    List.push_back((int)rand());
//    List.push_back((int)rand());
//    List.push_back((int)rand());


    List.push_back(1);
    List.push_back(2);
    List.push_back(3);
    List.push_back(4);
    List.push_back(5);

    List.print_LinkedList();
    List.reverse_remove_Index_node(2);

//    List.Rotate_linkedlists(3);
    List.print_LinkedList();
//
//    List.remove_value_Allnode(12);
//    List.move_node(1,9+1);
//    std:: cout<<List.Get_Intermediate_NodeIndex()<<std::endl;
//    std:: cout<<List.Get_Intermediate_NodeValue()<<std::endl;






    return 0;
}
