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
    // cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int a[n] , h[n] ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] >> h[i] ;
        }
        int ans = 0 , x = a[0] , c = 0 ;
        for(int i = 1 ; i < n ; i++)
        {
        	if(i == n - 1)
        	{
        		ans++ ;
        		break ;
        	}
        	c = a[i] - h[i] ;
        	if(c > x)
        	{
        		x = a[i] ;
        		ans++ ;
        	}
        	else
        	{
        		c = a[i] + h[i] ;
        		if(a[i + 1] > c)
        		{
        			x = c ;
        			ans++ ;
        		}
        		else
        		{
        			x = a[i] ;
        		}
        	}
        }
        cout << ans + 1 ;
        cout << "\n" ;
    }
    return 0 ;
}    
