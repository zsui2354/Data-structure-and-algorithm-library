
//
// Created by zsui2354 on 2024/4/20.
//

#ifndef ALGO_CPP_LINKEDLIST_H
#define ALGO_CPP_LINKEDLIST_H

#include <iostream>

template<typename T>
struct ListNode {
    T value;
    ListNode* next;
    ListNode(T val): value(val), next(nullptr){}
};

template<typename T>
class LinkedList {
private:
    ListNode<T>* head;
public:
    LinkedList(): head(nullptr) {}

    void        insert(T val, int position);

    void        move_node(int Index,int position);

    void        remove_Index_node(int position);

    void        reverse_remove_Index_node(int position);

    void        remove_value_Allnode(T val);

    void        print_LinkedList() const;

    void        push_back(T val);

    void        push_front(T val);

    void        pop_back();

    void        pop_front();

    void        ChangeNode_value(T val,int position);

    void        reverse();

    bool        find_Generics(T val);

    int         Size();

    int         find_Index(T val);

    int         Rotate_linkedlists(int Index);

    int         Get_Intermediate_NodeIndex();

    T           Get_Intermediate_NodeValue();


    ~LinkedList();

};



template<typename T>
void LinkedList<T>::insert(T val, int position) {
    ListNode<T>* newNode = new ListNode<T>(val);
    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    ListNode<T>* current = head;
    for (int i = 0; i < position - 1 && current != nullptr; ++i) {
        current = current->next;
    }
    if (current != nullptr) {
        newNode->next = current->next;
        current->next = newNode;
    }
}


template<typename T>
void LinkedList<T>::move_node(int Index, int position) {
    int counterIndex = Index;
    int counterPosition = position;
    ListNode<T>* currentIndex= head;
    ListNode<T>* currentPosition = head;
    ListNode<T>* prev_Index = nullptr;
    ListNode<T>* prev_Position = nullptr;
    if (Index == 0)
        head = head->next;
    for (int i = 0; i < counterIndex; ++i) {
        prev_Index = currentIndex;
        currentIndex = currentIndex ->next;

    }
    for (int i = 0; i < counterPosition; ++i) {
        prev_Position = currentPosition;
        currentPosition = currentPosition ->next;
    }
    prev_Index->next = currentIndex->next;
    currentIndex->next = currentPosition;
    prev_Position->next = currentIndex;
}


template<typename T>
void LinkedList<T>::remove_Index_node(int position) {
    if (head == nullptr) {
        return;
    }
    if (position == 0) {
        ListNode<T>* temp = head;
        head = head->next;
        delete temp;
    } else {
        ListNode<T>* prev = head;
        for (int i = 0; i < position - 1 && head->next != nullptr; ++i) {
            prev = prev->next;
        }
        if (prev->next != nullptr) {
            ListNode<T>* temp = prev->next;
            prev->next = temp->next;
            delete temp;
        }
    }
}

template<typename T>
void LinkedList<T>::reverse_remove_Index_node(int position) {
    if (head == nullptr || position <= 0 ){
        return;
    }
    ListNode<T>* current = head;
    ListNode<T>* temp = nullptr;
    int counter_length =0;
    while(current != nullptr ){
        current = current->next;
        counter_length ++;
    }
    if (position == counter_length){
        temp = head;
        head = head->next;
        delete temp;
        return;
    }
    current = head;
    for (int i = 1; i < counter_length - position; ++i) {
        current = current ->next;
    }
    temp = current->next;
    current->next = temp->next;
    delete temp;
}


template<typename T>
void LinkedList<T>::remove_value_Allnode(T val) {
    while(head != nullptr && head->value == val){
        ListNode<T>* temp = head;
        head = head->next;
        delete temp;
    }
    ListNode<T>* current =head;
    while(current != nullptr && current->next != nullptr){
        if (current->next->value == val){
            ListNode<T>* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }else{
            current = current->next;
        }
    }
}


template<typename T>
void LinkedList<T>::print_LinkedList() const {
    ListNode<T>* current = head;
    while (current != nullptr) {
        std::cout << current->value << ", ";
        current = current->next;
    }
    std::cout << std::endl;
}


template<typename T>
void LinkedList<T>::push_back(T val) {
    ListNode<T>* newNode = new ListNode<T>(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    ListNode<T>* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

template<typename T>
void LinkedList<T>::push_front(T val) {
    ListNode<T>* newNode = new ListNode<T>(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

template<typename T>
void LinkedList<T>::pop_back() {
    if (head == nullptr) {
        return;
    } else if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    if (head->next != nullptr) {
        ListNode<T>* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }
}

template<typename T>
void LinkedList<T>::pop_front() {
    if (head == nullptr) {
        return;
    } else if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    ListNode<T>* current = head->next;
    delete head;
    head = current;
}


template<typename T>
int LinkedList<T>::Size(){
    if (head == nullptr){
        return 0;
    }
    int counter=1;
    ListNode<T>* current = head;
    while(current->next != nullptr){
        current = current->next;
        counter++;
    }
    return counter;
}

template<typename T>
bool LinkedList<T>::find_Generics(T val) {
    ListNode<T>* current = head;
    while (current != nullptr) {
        if (current->value == val) {
            return true;
        }
        current = current->next;
    }
    return false;
}


template<typename T>
int LinkedList<T>::find_Index(T val) {
    int counter = 0;
    ListNode<T>* current = head;
    while(current->next != nullptr){
        if (current->value == val){
            return counter;
        }
        current = current->next;
        counter++;
    }
    return -1;
}


template<typename T>
void LinkedList<T>::ChangeNode_value(T val,int position) {
    ListNode<T>* current = head;
    int counter=0;
    while (counter < position){
        current = current->next;
        counter++;
    }
    current->value = val;
}


template<typename T>
int LinkedList<T>::Rotate_linkedlists(int Index) {
    int Counter;
    ListNode<T>* temp = head;
    ListNode<T>* current = head;
    ListNode<T>* back = head;
    while (back->next != nullptr){
        back = back->next;
    }
    while(current->next != nullptr){
        Counter++;
        current = current->next;
        if (Counter == Index){
            head = current->next;
            current->next = nullptr;
            back->next = temp;
        }
    }
    current ->next = nullptr;
    return -1;
}


template<typename T>
int LinkedList<T>::Get_Intermediate_NodeIndex() {
    int value = (int)Size()/2;
    return value;
}


template<typename T>
T LinkedList<T>::Get_Intermediate_NodeValue() {
    int value = (int)Size()/2;
    ListNode<T>* current = head;
    for (int i = 0; i < value-1; ++i) {
        current = current->next;
    }
    return current->value;
}



template<typename T>
void LinkedList<T>::reverse() {
    ListNode<T>* prev = nullptr;
    ListNode<T>* current = head;
    ListNode<T>* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}


template<typename T>
LinkedList<T>::~LinkedList() {
    ListNode<T>* current = head;
    while (current) {
        ListNode<T>* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}



//template<typename T>
//void LinkedList<T>::Bubble_Sort(){
//    if (head == nullptr || head->next == nullptr)
//        return;
//    else{
//        ListNode<T>* current = head;
//        ListNode<T>* current_n = head->next;
//        for (int i = 0; i < Size(); ++i) {
//            for (int j = 0; j < i; ++j) {
//                if (current->value > current_n->value){
//                    current ->next = current_n->next;
//                    current_n->next = head;
//                    if (i==1){
//                        head = current_n;
//                    }
//                    current = current->next;
//                    current = current_n->next;
//                }
//            }
//        }
//    }
//}



#endif //ALGO_CPP_LINKEDLIST_H



