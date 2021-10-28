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
    	vector<int> v(n) ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> v[i] ;
    	}
    	sort(all(v)) ;
    	int ans ;
    	if(k == 0)
    	{
    		ans = v[0] - 1 ;
    	}
    	else
    	{
    		ans = v[k - 1] ;
    	}
    	int cnt = 0 ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		if(v[i] <= ans)
    		{
    			cnt++ ;
    		}
    	}
    	if(cnt != k || !(1 <= ans && ans <= 1000 * 1000 * 1000))
    	{
    		cout << -1 ;
    	}
    	else
    	{
    		cout << ans ;
    	}
    	cout << endl ;
    }
    return 0 ;
}    
