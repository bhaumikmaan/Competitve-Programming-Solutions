/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>v(n, 0);
        stack<int>st;
        
        for(int i = n-1; i>=0; i--)
        {
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
           if(!st.empty())
                v[i] = st.top()-i; 
            st.push(i);
        }
        
        return v;

    }
};
