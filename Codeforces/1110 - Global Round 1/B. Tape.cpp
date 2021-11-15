/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.rbegin(),v.rend()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
void solve()
{
	int n , m , k ;
	cin >> n >> m >> k ;
	vector<int> a(n) , b ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < n - 1 ; i++)
	{
		b.pb(a[i + 1] - a[i] - 1) ;
	}	
	sort(all(b)) ;
	int ans = a[n - 1] - a[0] + 1 ;
	for(int i = 0 ; i < k - 1 ; i++)
	{
		ans -= b[i] ;
	}
	cout << ans ;
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
