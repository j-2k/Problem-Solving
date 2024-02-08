class MinStack {
private:
    stack<int> mainStack;
    stack<pair<int,int>> miniStack;
public:

    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push(val);

        if(miniStack.empty() || miniStack.top().second > val )
        {
            miniStack.push({1,val});
        }
        else if(val == miniStack.top().second)
        {
            miniStack.top().first++;
        }

    }
    
    void pop() {
        if(mainStack.top() == miniStack.top().second)
        {
            miniStack.top().first--;
            if(miniStack.top().first == 0)
            {
                miniStack.pop();
            }
        }
        mainStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return miniStack.top().second;
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
