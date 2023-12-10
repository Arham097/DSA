#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

int PerformOperation(char op, int op1, int op2) {
    switch (op) {
    case '+':
        return (op1 + op2);
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    case '^':
        return pow(op1, op2);
    default:
        cerr << "Invalid operator: " << op << endl;
        exit(EXIT_FAILURE);
    }
}

int PrefixEvaluation(string prefix) {
    stack<int> operands;
    reverse(prefix.begin(), prefix.end());

    for (char op : prefix) {
        if (isdigit(op)) {
            operands.push(op - '0');
        } else {
            int operator1 = operands.top();
            operands.pop();
            int operator2 = operands.top();
            operands.pop();
            int result = PerformOperation(op, operator1, operator2);
            operands.push(result);
        }
    }

    return operands.top();
}

int main() {
    string expression = "+2*35";
    cout << "Result: " << PrefixEvaluation(expression) << endl;

    return 0;
}
