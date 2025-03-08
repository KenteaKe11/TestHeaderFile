#include "LinkedList.h"

// Constructor cho Node
Node::Node(int value) {
    data = value;
    next = nullptr;
}

// Constructor cho LinkedList
LinkedList::LinkedList() {
    head = nullptr;
}

// Destructor (giải phóng bộ nhớ)
LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

// Hàm chèn phần tử vào cuối danh sách
void LinkedList::insert(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Hàm hiển thị danh sách
void LinkedList::display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
