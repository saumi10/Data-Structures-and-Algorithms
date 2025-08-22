#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    MyQueue() {
        

    }
    stack<int> s1,s2;
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(!s2.empty()) {
            int x=s2.top();
            s2.pop();
            return x;
        }    
        else{
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();

            }
            int x=s2.top();
            s2.pop();
            return x;
        }
    }
    
    int peek() {
        if(!s2.empty()) return s2.top();
        else{
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();

            }
            int x=s2.top();
            return x;
            
        }
    }
    
    bool empty() {
        if(s2.empty() && s1.empty()) return true;
        else return false;
    }
};