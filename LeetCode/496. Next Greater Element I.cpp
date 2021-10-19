/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ans(nums1.size(), -1) ;  // Initialize result vector with -1 values
		for (auto i = 0; i < nums1.size(); i++)
        {   // Check greater element for all elements in subset
			checkNum(ans , nums2, nums1[i], i) ;
		}
		return ans ;
    }
private:
	void checkNum(vector<int>& ans, vector<int>& nums2, int value, int pos) 
    {
		int index = find(nums2.begin(), nums2.end(), value) - nums2.begin() + 1;  // Calculate index of next element after 'value' in nums2
		for (int i = index; i < nums2.size(); i++) 
        {   // for all remaining elements 
			if (nums2[i] > value) 
            {     // find first greater and break
				ans[pos] = nums2[i];
				break;
			}
		}
    }
};
