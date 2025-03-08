#include "LinkedList.h"

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout << "Danh sách liên kết: ";
    list.display();

    return 0;
}
