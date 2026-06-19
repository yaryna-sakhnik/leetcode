// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

#include <stack>

using namespace std;

// @leet start
class MyQueue
{
public:
    MyQueue() { }
    
    void push(int x)
    {
        stack<int> s;
        while (!empty()) {
            s.push(pop());
        }
        q.push(x);
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }
    }
    
    int pop()
    {
        int p = q.top();
        q.pop();   
        return p;
    }
    
    int peek()
    {
        return q.top();
    }
    
    bool empty()
    {
        return q.empty();
        
    }

private:
    stack<int> q;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @leet end
