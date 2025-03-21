class MinStack {
    stack<long long>st;
    long long minEl;
public:
    MinStack() {
         minEl=INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
             st.push(val);
             minEl=val;
        }
        else{
            if(val>minEl) st.push(val);
            else {
                st.push(2LL*val-minEl);
                minEl=val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        else{
            long long el =st.top();
            st.pop();
            if(el<minEl)  minEl=2LL*minEl-el;
            
           }
    }
    
    int top() {
        if(st.empty()) return -1;
        else{
            long long el=st.top();
            if(el<minEl) return minEl;
            else return el;
        }
    }
    
    int getMin() {
        return minEl;
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