/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
    int n , x ;
    cin >> n >> x ;
    string s ; 
    cin >> s; 
    int w = 0 ;
    for(auto i:s)
    {
    	if(i == '1')
    	{
    		w++ ;
    	}
    }
    int ans = w*n ;
    int mx = 0 , cnt = 0 ;
    for(auto i:s)
    {
    	if(i == '1')
    	{
    		cnt++ ;
    	}
    	else
    	{
    		mx = max(mx , cnt) ;
    		cnt = 0 ;
    	}
    }
	mx = max(mx , cnt) ;
    // cout << mx << " " ;
    ans += x*mx ;
    cout << ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
