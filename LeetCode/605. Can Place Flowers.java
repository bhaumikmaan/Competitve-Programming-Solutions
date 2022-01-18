/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int count = 0 ;
        for(int i = 0 ; i < flowerbed.length ; i++)
        {
            if(flowerbed[i] == 0)
            {
                int prev , next ;
                if(i == 0 || flowerbed[i - 1] == 0)
                {
                    prev = 0 ;
                }
                else
                {
                    prev = 1 ;
                }
                if(i == flowerbed.length - 1 || flowerbed[i + 1] == 0)
                {
                    next = 0 ;
                }
                else
                {
                    next = 1 ;
                }
                if(prev == 0 && next == 0)
                {
                    flowerbed[i] = 1 ;
                    count++ ;
                }
            }
        }
        return count >= n ;
    }
}
