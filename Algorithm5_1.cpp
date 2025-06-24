#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void process(int value) {
    cout << "Processing value: " << value << endl;
}

void traverseList(Node* start) {
    Node* ptr = start;
    while (ptr != NULL) {
        process(ptr->data);
        ptr = ptr->next;
    }
}

Node* createList(int n) {
    if (n <= 0) return NULL;
    int value;
    cout << "Enter value for node 1: ";
    cin >> value;

    Node* head = new Node{value, NULL};
    Node* current = head;

    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> value;
        Node* newNode = new Node{value, NULL};
        current->next = newNode;
        current = newNode;
    }

    return head;
}

int main() {
    int n;
    cout << "How many nodes do you want to create? ";
    cin >> n;

    Node* head = createList(n);

    cout << "\nTraversing the linked list...\n";
    traverseList(head);

    return 0;
}
