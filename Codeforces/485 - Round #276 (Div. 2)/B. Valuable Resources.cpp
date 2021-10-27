/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
    int n ;
    cin >> n ;
    int mnx = inf , mny = inf , mxx = -inf , mxy = -inf ;
    while(n--)
    {
    	int x , y ;
    	cin >> x >> y ;
    	mxx = max(mxx , x) ;
    	mnx = min(mnx , x) ;
    	mxy = max(mxy , y) ;
    	mny = min(mny , y) ;
    }
    int ans = max(mxx - mnx , mxy - mny) ;
    cout << ans*ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }
    return 0 ;
}    
