/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n = firstList.size() , m = secondList.size() ;
        int i = 0 , j = 0 ;
        vector<vector<int>> ans ;
        while(i <n  && j < m) 
        {
            int front = max(firstList[i][0], secondList[j][0]) ; 
            int back = min(firstList[i][1], secondList[j][1]) ;
            if(back - front >= 0) 
            {
                ans.push_back({front, back}) ;
            }
            if(firstList[i][1] < secondList[j][1]) 
                i++;
            else  
                j++;
			
        }
        return ans ;
    }
};
