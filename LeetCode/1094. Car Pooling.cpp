/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>>v;
        for(int i = 0 ; i < trips.size() ; i++)
        {
            v.push_back({trips[i][1],trips[i][0]}) ;
            v.push_back({trips[i][2],trips[i][0]*(-1)}) ;
        }
        sort(v.begin(),v.end()) ;
        int num = 0 ;
        for(auto x: v)
        {
            num += x.second;
            if(num > capacity)
                return false;
        }
        return true ;
    }
};
