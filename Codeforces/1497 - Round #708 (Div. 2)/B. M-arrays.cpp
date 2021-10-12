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
    	int n , m ;
    	cin >> n >> m ;
    	int a[n] ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> a[i] ;
    	}
    	vector<int> b(m , 0) ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		b[a[i]%m]++ ;
    	}
    	int ans = 0 ;
    	if(b[0])
    	{
    		ans++ ;
    	}
    	vector<bool> v(m) ;
    	for(int i = 1 ; i < m ; i++)
    	{
    		if(!v[i] && b[i])
    		{
    			int x = max(b[i] , b[m - i]) ;
    			int xx = min(b[i] , b[m - i]) ;
    			ans += max(1LL , x - xx) ;
    			v[i] = v[m - i] = true ;
    		}
    	}
    	cout << ans ;
    	cout << "\n" ;
    }
    return 0 ;
}    
