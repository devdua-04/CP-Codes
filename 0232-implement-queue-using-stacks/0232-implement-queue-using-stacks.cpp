class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int n=s1.size();
        for(int i=1;i<n;i++){
            int temp=s1.top();
            s1.pop();
            s2.push(temp);
        }
        int x=s1.top();
        s1.pop();
        n=s2.size();
        for(int i=0;i<n;i++){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    int peek() {
        int n=s1.size();
        for(int i=1;i<n;i++){
            s2.push(s1.top());
            s1.pop();
        }
        int x=s1.top();
        s1.pop();
        s2.push(x);
        n=s2.size();
        for(int i=0;i<n;i++){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    bool empty() {
        if(s1.size()) return false;
        return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */