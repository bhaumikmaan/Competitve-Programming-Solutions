/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
#define N 800010
using namespace std ;
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	vector<int> a(n+1) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ; 
	}
	int ans = 0 , it = 1 , start = a[1] , itelse = 1 ;
	while(it <= n)
	{
		if(start <= m)
		{
			ans = max(ans , start) ;
			it++ ;
			start += a[it] ;			
		}
		else
		{
			itelse++ ;
			start -= a[itelse-1] ;
		}
	}
	cout << ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases-- )
    {
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}
