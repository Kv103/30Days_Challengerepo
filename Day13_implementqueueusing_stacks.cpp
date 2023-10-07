class MyQueue {
public:
stack<int>s1;
stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        
    }
    
    int pop() {

        while(s1.size()!=1)
        {
            int top= s1.top();
            s1.pop();
            s2.push(top);
        }
        int ans= s1.top();
        s1.pop();

        while(!s2.empty())
        {
            int top= s2.top();
            s2.pop();
            s1.push(top);
        }
        return ans;
        
    }
    
    int peek() {

        while(s1.size()!=1)
        {
            int top= s1.top();
            s1.pop();
            s2.push(top);
        }
        int ans= s1.top();
        // s1.pop();

        while(!s2.empty())
        {
            int top= s2.top();
            s2.pop();
            s1.push(top);
        }
        return ans;
        
    }
    
    bool empty() {
        return s1.empty();
        
    }
    // t-c-> O(N)
    // S->->0(N)
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */