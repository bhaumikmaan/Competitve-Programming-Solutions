/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int numTilings(int n) {
        if (n < 3) 
            return n;
        int modulo = pow(10, 9) + 7 ;    
        vector<long> Domino(n+1, 0), Tromino(n+1, 0) ;
        Domino[0] = 0 , Domino[1] = 1 , Domino[2] = 2 ;
        Tromino[0] = 0 , Tromino[1] = 1 , Tromino[2] = 2 ;
        
        for (int i = 3; i <= n; i++) 
        {
            Domino[i] = (Domino[i-1] + Domino[i-2] + 2*Tromino[i-2]) % modulo ;
            Tromino[i] = (Tromino[i-1] + Domino[i-1]) % modulo ;
        }
        return Domino[n] ;
    }
};
