#include "UnsortedLinkedListDict.hpp"
#include <iostream>

void UnsortedLinkedListDict::insert(int key) {
    // Creates a new node for each int and links it to the previous node

    Node* current = new Node;
    current->data = key;

    if (head == nullptr) {
        head = current;
        return;
    }

    current->next = this->head;
    this->head = current;
}

bool UnsortedLinkedListDict::lookup(int key) const {
    // Loops through each node starting at the head node to find key integer

    Node* search = head;

    if (head == nullptr) {
        return false;
    }

    while (search->next != nullptr) {
        if (search->data == key) {
            return true;
        }

        search = search->next;
    }

    return false;
}

void UnsortedLinkedListDict::remove(int key) {
    // Loops through each node looking for the key node, deletes it, and links the previous nodes together
    Node* rm = head;

    if (rm->data == key) {
        Node* curr = rm;
        head = rm->next;

        delete curr;
        return;
    }

    while (rm->next != nullptr) {
        if (rm->next->data == key) {
            Node* curr = rm->next;
            rm->next = rm->next->next;

            delete curr;
            return;
        }

        rm = rm->next;
    }

}