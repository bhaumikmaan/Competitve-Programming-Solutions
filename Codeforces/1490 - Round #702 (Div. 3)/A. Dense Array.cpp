/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
// #define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
    int n ;
    cin >> n ;
    int x ;
    cin >> x ;
    int ans = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
    	int a ;
    	cin >> a ;
    	int mn = min(x , a) ;
    	int mx = max(x , a) ;
    	while(mn*2 < mx)
    	{
    		ans ++ ;
    		mn *= 2 ;
    	}
    	x = a ;
    }        
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
