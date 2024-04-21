//
// Created by Hasee on 2024/4/20.
//

#ifndef ALGO_CPP_LINKEDLIST_H
#define ALGO_CPP_LINKEDLIST_H

#include <iostream>
#include <list>

class Node{
public:
    int val;
    Node* next;

    Node(int x):val(x),next(nullptr){}
};

class LinkedList{
public:
    Node*head;
    LinkedList():head(nullptr){};

    void insert(int val, int position){
        Node* newNode = new Node(val);
        if (position == 0 || head == nullptr){
            newNode->next=head;
            head->next=newNode;
        }else{
            Node *prev = head;
            for (int i = 0; i !=position-1 && prev->next != nullptr; i++) {
                prev=prev->next;
            }
            newNode->next=prev->next;
            prev->next=newNode;
        }
    }

    void remove(int position){
        if (head == nullptr){
            return;
        }else if (position == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }else{
            Node* prev =head;
            for (int i = 0; i < position-1 && head->next != nullptr; i++) {
                prev=prev->next;
            }
            if (prev->next != nullptr){
                Node* temp = prev->next;
                prev->next = temp->next;
                delete temp;
            }
        }
    }

    void print_List(){
        Node* temp = head;
        while(temp != nullptr){
            std::cout<<temp->val<<",";
            temp=temp->next;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == nullptr){
            head = newNode;
        }else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;   //当前temp指针遍历完已经指向最后的节点了， 将newNode也指向这个节点就完成了增加节点在末尾

        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == nullptr){
            head = newNode; //设置 newNode 为新的头节点
        }else{
            newNode->next = head;
            head = newNode; //设置 newNode 为新的头节点
        }
    }

    void pop_back(){
        if (head == nullptr){
            return;
        }else if(head->next==nullptr){
            delete head;
            head == nullptr;
            return;
        }
        Node* temp=head;
        while(temp->next->next != nullptr){
            temp=temp->next;
        }
        delete temp->next;
        temp->next = nullptr;   //因为倒数第一的节点被删除，第二的需要确保末尾节点是nullptr才能保证链表正确
    }

    void pop_front(){
        if (head == nullptr){
            return;
        }else if(head->next != nullptr){
            Node* temp = head->next;
            delete head;
            head = temp;
        }else{
            delete head;
            head = nullptr;
        }
    }
};





#endif //ALGO_CPP_LINKEDLIST_H
