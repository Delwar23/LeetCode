class MyStack {
public:
    
    queue<int>qu1;
    queue<int>qu2;
    
    MyStack() {
        
    }
    
    void push(int x) {
        while(!qu1.empty())
        {
            int i = qu1.front();
            qu2.push(i);
            qu1.pop();
        }
        qu1.push(x);
        while(!qu2.empty())
        {
            int i =qu2.front();
            qu1.push(i);
            qu2.pop();
        }
    }
    
    int pop() {
        int i=qu1.front();
    
        qu1.pop();
           return i;
    }
    
    int top() {
        int i=qu1.front();
        return i;
        
    }
    
    bool empty() {
        if(!qu1.empty())
            return false;
        else
            return true;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */