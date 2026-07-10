class MinStack {
public:
    int minvalue=INT_MAX;
    stack <int> minstack;
    stack <int> s;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        minvalue= min(value, minvalue);
        minstack.push(minvalue);
    }
    
    void pop() {
    s.pop();
    minstack.pop();

    if(minstack.empty())
        minvalue = INT_MAX;
    else
        minvalue = minstack.top();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
