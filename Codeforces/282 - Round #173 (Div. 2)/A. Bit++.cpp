/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n = 0 ;
    cin >> n ;
    int x = 0;
    while( n -- )
    {
        string bit ;
        cin >> bit ;
        if( bit[0] == '+' || bit[1] == '+' || bit[2] == '+')
        {
        	x++;
        	continue;
        }
        else if(bit[0] == '-' || bit[1] == '-' || bit[2] == '-')
        {
        	x--;
        	continue;
        }
        
    }
    cout << x << endl ;
    return 0 ;
}    
