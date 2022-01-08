/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases ;
    cin >> testcases ;
    while( testcases -- )
    {
        int L , v , l , r ;
        cin >> L >> v >> l >> r ;
        
        int sum = L / v;
        int sum1 ;
        int mod = l % v;
        
        if(mod != 0)
		{
			sum1 = (r/v) - (l/v) - 1 ;
		}
		else
		{
			sum1 = (r/v) - (l/v) ;
		}
		
		// int a = r/v ;
		// int b = l/v ;
 		// if(mod != 0 )
 		// {
 			// b++ ;
 		// }
 		
		// cout << sum << " " << sum1 << endl ;
        cout << sum - (sum1 + 1) << endl ;
        // cout << sum - (a - b +1) << endl ;
        
    }
    return 0 ;
}    
