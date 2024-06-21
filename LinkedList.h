
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
LinkedList<T>::~LinkedList() {
    ListNode<T>* current = head;
    while (current) {
        ListNode<T>* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}

#endif //ALGO_CPP_LINKEDLIST_H



