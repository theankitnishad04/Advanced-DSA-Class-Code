// QUEUE LINKED LIST OPERATIONS

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    char info;
    Node* next;
    Node(char data) {
        info = data;
        next = NULL;
    }
};

class Stack {
    Node* top;
public:
    Stack() {
        top = NULL;
    }

    void push(char c) {
        Node* newNode = new Node(c);
        newNode->next = top;
        top = newNode;
    }

    char pop() {
        if (top == NULL) {
            return '\0'; // empty stack
        }
        char val = top->info;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    Stack s;

    // Push all characters into stack
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // Pop characters to form reversed string
    string rev = "";
    while (!s.isEmpty()) {
        rev += s.pop();
    }

    cout << "Reversed string: " << rev << endl;

    if (str == rev) {
        cout << "Palindrome!" << endl;
    } else {
        cout << "Not Palindrome!" << endl;
    }

    return 0;
}
