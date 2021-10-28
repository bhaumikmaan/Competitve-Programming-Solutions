/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        if(n < 3)
        {
            return {} ;
        }
        vector<vector<int>> res ; 
        sort(arr.begin() , arr.end()) ;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && arr[i] == arr[i-1])
            {
                continue ;
            }
            
            int j = i + 1 , k = n - 1 ;
            while(j < k)
            {
                int sum = arr[i] + arr[j] + arr[k] ;
                if(sum < 0)
                {
                    j++ ;
                }
                else if(sum > 0)
                {
                    k-- ;
                }
                else
                {
                    res.push_back({arr[i] , arr[j] , arr[k]}) ;    
                    while(j < k && arr[j] == arr[j+1])
                    {
                        j++ ;
                    }
                    while(j < k && arr[k] == arr[k-1])
                    {
                        k-- ;
                    }
                    j++;
                    k--;
                }
            }
                
        }
        return res;
    }
};
