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
    	int n , k ;
    	cin >> n >> k ;
    	int cnt = 0 ;
    	for(int i = 1 ; i <= n ; i++)
    	{
    		if(k%i == 0 && k/i <= n)
    		{
    			cnt++ ;
    		}
    	}
    	cout << cnt ;
    	cout << endl ;
    }
    return 0 ;
}    
