#include<iostream>
#include<bits/stdc++.h>
using namespace std;\


class MyQueue {
public:

    stack<int> * st1 = nullptr;
    stack<int> * st2 = nullptr;


    MyQueue() { 

        st1 = new stack<int>;
        st2 = new stack<int>;

    }
    
    void push(int x) {
            // Move everything from st1 to st2
            while (!st1->empty()) {
                st2->push(st1->top());
                st1->pop();
            }

            // Push new element
            st1->push(x);

            // Move everything back to st1
            while (!st2->empty()) {
                st1->push(st2->top());
                st2->pop();
            }
        }

    
    int pop() {
        int val  = st1->top();
        st1->pop();

        return val;
    }
    
    int peek() {
        return st1->top();
    }
    
    bool empty() {
        return st1->empty();
    }
};


int main()
{
    
}