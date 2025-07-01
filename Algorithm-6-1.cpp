#include <iostream>
using namespace std;

#define MAXSTK 5 

int main() {
    int stack[MAXSTK]; 
    int top = -1;      
    int item;          
    int n;             

    cout << "How many items do you want to push (max " << MAXSTK << ")? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (top == MAXSTK - 1) {
            cout << "OVERFLOW! Stack is full.\n";
            break;
        }

        cout << "Enter item " << i + 1 << ": ";
        cin >> item;

        top = top + 1;
        stack[top] = item;

        cout << "Pushed " << item << " to stack.\n";
    }

    cout << "\nFinal stack (top to bottom):\n";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << endl;
    }

    return 0;
}
