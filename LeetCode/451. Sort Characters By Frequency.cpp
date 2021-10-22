/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,int>> freq(256);
        for(auto c:s) {
            freq[c].first++;
            freq[c].second = c;
        }
        sort(freq.begin(),freq.end(), greater<pair<int,int>> ());
        string ans;
        for(int i = 0; i < 256; i++){
            while(freq[i].first > 0){
                ans += freq[i].second;
                freq[i].first--;
            }
        }
        return ans;
    }
};
