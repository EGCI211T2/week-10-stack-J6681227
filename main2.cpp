#include "charstack.h"
#include <iostream>
using namespace std;

bool isMatching(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '{' && close == '}') return true;
    if (open == '[' && close == ']') return true;
    return false;
}

int main() {
    CharStack s;
    string expr;

    cout << "Enter expression: ";
    cin >> expr;

    for (int i = 0; i < expr.length(); i++) {
        char c = expr[i];

        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (s.isEmpty()) {
                cout << "Not Balanced" << endl;
                return 0;
            }
            char top = s.pop();
            if (!isMatching(top, c)) {
                cout << "Not Balanced" << endl;
                return 0;
            }
        }
    }

    if (s.isEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
