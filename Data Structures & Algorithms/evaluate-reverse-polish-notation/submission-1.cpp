class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto s : tokens)
        {
            if (s=="+")
            {
                int v1=st.top();
                st.pop();
                int v2=st.top();
                st.pop();
                st.push(v1+v2);
            }
            else if (s=="-")
            {
                int v1=st.top();
                st.pop();
                int v2=st.top();
                st.pop();
                st.push(v2-v1);
            }
            else if (s=="*")
            {
                int v1=st.top();
                st.pop();
                int v2=st.top();
                st.pop();
                st.push(v2*v1);
            }
            else if (s=="/")
            {
                int v1=st.top();
                st.pop();
                int v2=st.top();
                st.pop();
                st.push(v2/v1);
            }
            else
            {
                st.push(std::stoi(s));
            }
        }
        return st.top();
    }
};
