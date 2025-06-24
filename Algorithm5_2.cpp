#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, item;
    cout << "How many nodes? ";
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Enter item to search: ";
    cin >> item;

    Node* ptr = head;
    bool found = false;
    while (ptr != NULL) {
        if (ptr->data == item) {
            cout << "Item found: " << item << endl;
            found = true;
            break;
        }
        ptr = ptr->next;
    }

    if (!found) {
        cout << "Item not found." << endl;
    }

    return 0;
}
