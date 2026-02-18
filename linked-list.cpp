#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node * next;
};

// The front is called the head
// The back is called the tail
Node* push_front(Node * head, string name) {
    Node * node = new Node;
    node->name = name;
    node->next  = head;
    return node;   // new head of the list
}


int main() {

    // Node * head = push_front(nullptr, "Kiko");

    Node * node1 = new Node;
    node1->name = "Sean";

    Node * node2 = new Node;
    node2->name = "Mari";

    Node * node3 = new Node;
    node3->name = "Momo";

    Node * node4 = new Node;
    node4->name = "Kiko";

    cout << "The address of node1 is: " << node1 << endl;
    cout << "The address of node2 is: " << node2 << endl;
    cout << "The address of node3 is: " << node3 << endl;
    cout << "The address of node4 is: " << node4 << endl;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = nullptr;

    Node * currentNode = node1;
    while(currentNode != nullptr) {
        cout << currentNode->name << endl;
        currentNode = currentNode->next;
    }

    return 0;
}