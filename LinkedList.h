#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value);
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    void insert(int value);
    void display();
};

#endif
