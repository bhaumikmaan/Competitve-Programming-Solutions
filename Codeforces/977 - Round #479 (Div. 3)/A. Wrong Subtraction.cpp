/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, k;
    cin >> n >> k;
    while(k--)
    {
    	if( n%10 == 0)
    	{
            n = n/10;
        }
        else
        {
        	n--;
        }
    }
    cout << n << endl;
    return 0 ;
}    
