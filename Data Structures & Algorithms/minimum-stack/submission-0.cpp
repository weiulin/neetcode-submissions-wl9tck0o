class MinStack {
private:
    // pair 的結構：{當前放入的數值, 包含當前數值在內的歷史最小值}
    stack<pair<int,int>> st;

public:
    MinStack() {}

    void push(int val) {
        // 如果堆疊是空的，那第一個放進來的數字，自己就是最小值
        if(st.empty()){
            st.push({val,val});
        }
        else{
            int curr_min = min(val,st.top().second);
            st.push({val,curr_min});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
