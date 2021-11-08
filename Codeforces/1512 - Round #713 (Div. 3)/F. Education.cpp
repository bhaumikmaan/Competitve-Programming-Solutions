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
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	int a[n] , b[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < n - 1 ; i++)
	{
		cin >> b[i] ;
	}
	b[n - 1] = 0 ;
	int ans = m + 1 , curr = 0 , x = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		int y = (b[i] + a[i] - x - 1)/a[i] ;
		ans = min(ans , curr + (m - x + a[i] - 1)/a[i]) ;
		curr += y + 1 ;
		x += y*a[i] - b[i] ;
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
