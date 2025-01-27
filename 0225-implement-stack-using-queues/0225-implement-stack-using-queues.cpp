class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int n=q1.size();
        for(int i=1;i<n;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int x=q1.front();
        q1.pop();
        n=q2.size();
        for(int i=0;i<n;i++){
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
    
    int top() {
        int n=q1.size();
        for(int i=1;i<n;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int x=q1.front();
        q2.push(x);
        q1.pop();
        n=q2.size();
        for(int i=0;i<n;i++){
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
    
    bool empty() {
        if(q1.size()) return false;
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