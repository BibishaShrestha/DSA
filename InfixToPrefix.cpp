// Conversion of infix to prefix expression
#include <iostream> 
#include <stack>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

// precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// check if operator
bool isOperator(char op) {
    return op == '+' || op == '-' || op == '*' || op == '/' || op == '^';
}

// infix to postfix
string infixToPostfix(const string& infix) {
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char op = infix[i];

        if (op == ' ')
            continue;

        if (isalnum(op)) {
            postfix += op;
        }
        else if (op == '(') {
            st.push(op);
        }
        else if (op == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (isOperator(op)) {
            while (!st.empty() && precedence(st.top()) >= precedence(op)) {
                if (op == '^' && st.top() == '^') break;  
                postfix += st.top();
                st.pop();
            }
            st.push(op);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

// infix to prefix
string infixToPrefix(string infix) {

    // 1. reverse the string
    reverse(infix.begin(), infix.end());

    // 2. swap '(' and ')'
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') infix[i] = ')';
        else if (infix[i] == ')') infix[i] = '(';
    }
    // for (char &op : infix) = range based for loop can be used too
    // 3. convert to postfix
    string postfix = infixToPostfix(infix);

    // 4. reverse postfix to get prefix
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    getline(cin, infix);

    cout << "Prefix expression: " << infixToPrefix(infix) << endl;
    return 0;
}




