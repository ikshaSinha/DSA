class MyStack {
    private:
    queue<int>Q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int s = Q.size();
        Q.push(x);
        for(int i=1;i<=s;i++){
            Q.push(Q.front());
            Q.pop();
        }
    }
    
    int pop() {
        int el = Q.front();
        Q.pop();
        return el;
    }
    
    int top() {
        return Q.front();
    }
    
    bool empty() {
        if(Q.size()!=0) return false;
        else return true;
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