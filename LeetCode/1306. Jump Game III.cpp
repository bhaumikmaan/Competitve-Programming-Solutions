/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(start < 0 || start >= size(arr) || arr[start] < 0) 
            return false ;
        arr[start] *= -1;
        return !arr[start] || canReach(arr, start + arr[start]) || canReach(arr, start - arr[start]) ;
    }
};
