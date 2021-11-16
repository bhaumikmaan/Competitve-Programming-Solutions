/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	int a , b , c ;
    	cin >> a >> b >> c ; 
    	int x = 2*abs(a-b) ;
    	if(b > x || a > x || c > x)
    	{
    		cout << -1 ;
    	}
    	else
    	{
    		int ans = c + x/2 ;
    		if(ans > x)
    		{
    			ans = c - x/2 ;
    		}
    		cout << ans ;
    	}
        cout << "\n" ;
    }
    return 0 ;
}    
