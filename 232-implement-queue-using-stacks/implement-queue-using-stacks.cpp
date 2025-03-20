class MyQueue {
private:
stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(!s2.empty()){
            int el =s2.top();
            s2.pop();
            return el;
        }
        else{
            while(s1.size()){
            s2.push(s1.top());
            s1.pop();
            }
           int el=s2.top();
           s2.pop();
           return el;
        }
    }
    
    int peek() {
        if(s2.empty()){
           while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(s2.empty()) return -1;
        int el= s2.top();
        
        return el;
    }
    
    bool empty() {
        return (s1.empty() && s2.empty());
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