#include<bits/stdc++.h>
using namespace std;

class MyStack{
queue<int>q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int s=q.size();
        for(int i=1;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int res=q.front();
        q.pop();
        return res;

    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return !q.size()?true:false;
    }
};