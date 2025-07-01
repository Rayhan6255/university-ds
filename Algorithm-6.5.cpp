#include <iostream>
#include <stack>
#include <cctype>  
using namespace std;

int main() {
    string postfix;
    stack<int> stk;
    int a, b, result;

    cout << "Enter postfix expression (e.g. 23+5*): ";
    cin >> postfix;  

    postfix += ')';  

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            stk.push(ch - '0');  
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            a = stk.top(); stk.pop();
            b = stk.top(); stk.pop();

            if (ch == '+') result = b + a;
            else if (ch == '-') result = b - a;
            else if (ch == '*') result = b * a;
            else if (ch == '/') result = b / a;
        
            stk.push(result);
        }
        else if (ch == ')') {
            break;
        }
    }
    cout << "Result: " << stk.top() << endl;
    return 0;
}
