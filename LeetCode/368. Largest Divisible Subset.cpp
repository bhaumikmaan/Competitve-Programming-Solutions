/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> lis(n, 1);
		vector<int>prev_idx(n, -1);
        int max = 0 , index = 0 ;
        for(int i = 0; i<n; i++)
        {    
            for(int j = i - 1; j>=0; j--){
                if(lis[j]+1 > lis[i] && arr[i]%arr[j] == 0)
                {
                    lis[i] = lis[j] + 1;
                    prev_idx[i] = j;
                }
                if(max < lis[i])
                {
                    max = lis[i];
                    index = i;
                }
            }
        }
        vector<int>divisible_subset{};
        while(index != -1)
        {    
            divisible_subset.push_back(arr[index]);
            index = prev_idx[index];
        }
        return divisible_subset;
    }
};
