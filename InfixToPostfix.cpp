// Conversion of infix to postfix expression
#include <iostream>
#include <stack>
#include <cctype>
#include <string>
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// Function to check if character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Convert infix to postfix
string infixToPostfix(const string& infix) {
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        // Skip whitespace
        if (c == ' ')
            continue;

        // If operand ? add to output
        if (isalnum(c)) {
            postfix += c;
        }
        // If '(' ? push to stack
        else if (c == '(') {
            st.push(c);
        }
        // If ')' ? pop until '('
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }
        // Operator
        else if (isOperator(c)) {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                if (c == '^' && st.top() == '^') break; // right associative
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    getline(cin, infix);

    cout << "Postfix expression: " << infixToPostfix(infix) << endl;
    return 0;
}

