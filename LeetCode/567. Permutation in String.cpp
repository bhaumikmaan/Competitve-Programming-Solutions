/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> m1(26), m2(26) ;
		for(char& i1 : s1) 
			m1[i1 - 'a']++;
		for(int i = 0; i < s2.length(); i++)
        {
			m2[s2[i] - 'a']++ ;
			if(i >= s1.size() - 1) 
            {
				if(m2 == m1)
                    return true ;
				m2[s2[i - s1.size() + 1] - 'a']-- ;
			}
		}
		return false ;
    }
};
