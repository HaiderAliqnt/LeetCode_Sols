#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:

    queue<int> * q1 = nullptr;
    queue<int> * q2 = nullptr;
    
    MyStack() {
        
        q1 = new queue<int>;
        q2 = new queue<int>;
          
    }   
    
    void push(int x) {
        q2->push(x);
        
        while(!q1->empty()){
            int temp = q1->front();
            q1->pop();
            q2->push(temp);
        }
        queue<int> * temp = q1;
        q1 = q2 ; 
        q2 = temp;


    }
    
    int pop() {
        
        int front = q1->front();
        q1->pop();
        return front; 
    }
    
    int top() {
        int front = q1->front();
        return front; 
    }
    
    bool empty() {
        return q1->empty();
    }
};




int main()
{
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;  // 3
    s.pop();
    cout << s.top() << endl;  // 2
    return 0;
}