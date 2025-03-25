class Solution {
public:
    int operate(int a, int b, string elem) {
        if (elem == "+")
            return a + b;

        if (elem == "-")
            return a - b;

        if (elem == "*")
            return (long)a * (long)b;

        if (elem == "/")
            return a / b;

        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {

            string elem = tokens[i];
            if (elem == "+" || elem == "-" || elem == "/" || elem == "*") {

                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                int result = operate(a, b, elem);
                st.push(result);
            } else {
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};
