class MinStack {
public:
    vector<int> stack;
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push_back(val);    
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        int n=stack.size();
        return stack[n-1];
    }
    
    int getMin() {
        int min=INT_MAX;
        for(int i=0;i<stack.size();i++){
            if(min>stack[i]) min=stack[i];
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */