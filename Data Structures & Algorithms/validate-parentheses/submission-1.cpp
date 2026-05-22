class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> series={
            {')','('},
            {']','['},
            {'}','{'}
            };

        for (const char c : s)
        {
            if (series.count(c)) 
            {
                if (!st.empty() && st.top() == series[c])
                    st.pop();
                else
                    return false;
            }
            else
            {
                st.push(c);
            }
        }
        return st.empty();
    }
};
