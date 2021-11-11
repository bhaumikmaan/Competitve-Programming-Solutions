/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	int ans ;
	if(!(n&1))
	{
		ans = k%n ;
	}
	else
	{
		int x = (k - 1)/(n/2) ;
		ans = (k + x)%n ;	
	}
	if(ans == 0)
	{
		ans = n ;
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
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
