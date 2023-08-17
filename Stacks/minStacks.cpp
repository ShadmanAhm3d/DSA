
#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> minstack;
    int minVal;

    MinStack() {
        
    }
    
    void push(int val) {
         st.push(val);
        if(minstack.empty() ||  val <= minstack.top()){
            minstack.push(val);
        }
    }
    
    void pop() {
            if (st.top() == minstack.top()) {
                minstack.pop();
            }

    st.pop();
        
    }

    int top() {
        return st.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

int main() {
    MinStack minStack;
    
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    
    cout << "getMin(): " << minStack.getMin() << endl; // Output: -3
    
    minStack.pop();
    
    cout << "top(): " << minStack.top() << endl;      // Output: 0
    cout << "getMin(): " << minStack.getMin() << endl; // Output: -2
    
    return 0;
}

