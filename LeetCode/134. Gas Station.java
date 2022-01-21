/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int current = 0 , total = 0 , diff = 0 , start = 0 ;
        for(int i = 0; i < gas.length ; i++)
        {
            diff = gas[i] - cost[i] ;
            total += diff ;
            current += diff ;
            if(current < 0)
            {
                start = i + 1 ;
                current = 0 ;
            }
        }
        if(total >= 0)
        {
            return start ;
        }
        return -1 ;
    }
}
