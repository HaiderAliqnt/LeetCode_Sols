#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    int size;
    char *stack;
    int top;

public:
    Stack(int size) {
        this->top = -1;
        this->size = size;
        this->stack = new char[this->size];
    }

    void push(char value) {
        if (this->top == this->size - 1) {
            cout << "STACK FULL..." << endl;
        } else {
            top++;
            this->stack[top] = value;
        }
    }

    char pop() {
        if (this->top == -1) {
            cout << "STACK EMPTY...." << endl;
            return '\0';
        } else {
            return this->stack[top--];
        }
    }

    char peek(int i) {
        return this->stack[i];
    }

    int count() {
        return top + 1;
    }

    
    
};



class Solution {
public:
    Stack *St = new Stack(10000);


    

    string removeDuplicateLetters(string s) {
        for (char c : s) {
            bool presence = false;
            for (int i = 0; i < St->count(); i++) {
                if (St->peek(i) == c) {
                    presence = true;
                    break;
                }
            }
            if (!presence) {
                St->push(c);
            }
        }

       
        

        string answer ;
        for (int i = 0; i < St->count(); i++) {
            answer += St->peek(i);
        }

        
        

        return answer;
    }
};

int main() {
    Solution S;
    string test = "baca";
    string answer = S.removeDuplicateLetters(test);
    cout<<answer;
    return 0;
}
