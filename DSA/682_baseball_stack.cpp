#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int calPoints(vector<string>& operations) {
       int size = operations.size();
       int sum = 0 ; 
       stack <int> st;
       for(int i = 0 ; i < size ; i++){
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+" ){
                st.push(stoi(operations[i]));
            }
            else if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                int top = st.top();
                st.push(top*2);
            }
            else if(operations[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);

            }
        }

        int stack_size = st.size();

        for(int i = 0 ; i < stack_size ; i++){
            sum = sum + st.top();
            st.pop();
        }
        
        
        return sum;
    }
};
int main()
{
    Solution s;
    vector<string> operations = {"5","2","C","D","+"};
    cout << s.calPoints(operations) << endl;
    return 0;
}