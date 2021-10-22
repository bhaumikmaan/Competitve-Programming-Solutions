### KNOWLEDGE IS POWER  ### 

class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = ''
        bucket = [None for i in range(len(s) + 1)]
        hash_map = {}
        
        for char in s:
            hash_map[char] = hash_map.get(char, 0) + 1
            
        for key, value in hash_map.items():
            if bucket[value] is None:
                bucket[value] = []
            
            bucket[value].append(key)
            
        for i in reversed(range(len(bucket))):
            if bucket[i] is not None:
                for char in bucket[i]:
                    result += char * i
                    
        return result
