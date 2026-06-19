/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

#include <iostream>
#include <queue>

using namespace std;

// @lc code=start
class MyStack {
public:
    MyStack() {
        cout << "MyStack()" << endl;
    }
    
    MyStack(const MyStack &) = default;
    MyStack(MyStack &&) = default;
    MyStack& operator=(const MyStack &) = default;
    MyStack& operator=(MyStack &&) = default;
    ~MyStack()
    {
        cout << "~MyStack()" << endl;
    }

    void push(int x) {
        queue<int> q2;
        q2.push(x);
        while (!empty()) {
            q2.push(pop());
        }
        q = std::move(q2);
    }
    
    int pop() {
        auto x = q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
       return q.empty(); 
    }

private:
    queue<int> q;
};


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

int main()
{
    MyStack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    cout << obj.pop() << endl;
    cout << obj.top() << endl;
    cout << obj.empty() << endl;

    return 0;
}