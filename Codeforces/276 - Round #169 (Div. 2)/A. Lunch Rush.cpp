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
    	int n , k , f , t ;
    	cin >> n >> k >> f >> t ;
    	int ans ;
    	if(t > k)
    	{
    		ans = f - t + k ;
    	}
    	else
    	{
    		ans = f ;
    	}    	
    	n-- ;
    	while(n--)
    	{
    		cin >> f >> t ;
    		int mx = 0 ;
    		if(t > k)
    		{
    			mx = f - t + k ;
    		}
    		else
    		{
    			mx = f ;
    		}
    		ans = max(mx , ans) ;
    	}
    	cout << ans ;
    	cout << endl ;
    }
    return 0 ;
}    
