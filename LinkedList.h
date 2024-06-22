
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
    ListNode(T val): value(val), next(nullptr) {}
};

template<typename T>
class LinkedList {
private:
    ListNode<T>* head;
public:
    LinkedList(): head(nullptr) {}

    void insert(T val, int position);

    void remove(int position);

    void print_LinkedList() const;

    void push_back(T val);

    void push_front(T val);

    void pop_back();

    void pop_front();

    int Size();

    bool find_Generics(T val);

    int find_Index(T val);

    void ChangeNode_value(T val,int position);

   // void Bubble_Sort();

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
void LinkedList<T>::remove(int position) {
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



