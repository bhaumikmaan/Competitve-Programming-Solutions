/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size() , maxArea = 0;
        stack<int> st ;
        for(int i = 0; i <= n; i++)
        {
            int currHeight = i == n ? 0 : heights[i];
            while(!st.empty() && currHeight < heights[st.top()])
            {
                int top = st.top() ;
                st.pop() ;
                int width = st.empty() ? i : i - st.top() - 1;
                int area = heights[top] * width;
                maxArea = max(area, maxArea);
            }
            st.push(i) ;
        }
        return maxArea;
    }
};
