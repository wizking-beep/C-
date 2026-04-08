#include <iostream>
using namespace std;

/*
The linked list has an advantage over arrays
in that it can be easily modified (insertion/deletion)
without needing to shift elements.
But the disadvantage is that accessing elements is slower,
as you need to traverse the list.
 */
class Node {
    public:
    int value;
    Node* next;
};

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

void insertAtHead(Node** head, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtTail() {

}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = nullptr;

    //accessing the elements
    printList(head);
    insertAtHead(&head, -1);
    printList(head);

    return 0;
}
