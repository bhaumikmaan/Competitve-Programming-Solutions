/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public boolean validMountainArray(int[] arr) {
        if(arr.length < 3) 
            return false;
        int l = 0 , r = arr.length - 1 ;
        while(l + 1 < arr.length - 1 && arr[l] < arr[l + 1]) 
            l++ ;
        while(r - 1 > 0 && arr[r] < arr[r - 1]) 
            r-- ;
        return l == r;
    }
}
