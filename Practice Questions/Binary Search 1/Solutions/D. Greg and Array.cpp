/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
#define N 100007
using namespace std ;
vector<int> a(N) , l(N) , r(N) , d(N) , x(N) , y(N) , rec(N) , aakhri(N,0);
void solve( )
{
	int n , m , k ;
	cin >> n >> m >> k ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 1 ; i <= m ; i++)
	{
		cin >> l[i] >> r[i] >> d[i] ;
	}
	for(int i = 1 ; i <= k ; i++)
	{
		cin >> x[i] >> y[i] ;
	} 
	for(int i = 1 ; i <= k ; i++)
	{
		rec[x[i]]++ ;
		rec[y[i]+1]-- ;
	}
	for(int i = 1 ; i <= m ; i++)
	{
		rec[i] += rec[i-1] ;
		aakhri[l[i]] += rec[i]*d[i] ;
		aakhri[r[i]+1] -= rec[i]*d[i] ;
	}
	// for(int i = 1 ; i <= n ; i++)
	// {
		// cout << aakhri[i] << " " << a[i] << "\n" ;
	// }
	int ans = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		ans += aakhri[i] ;
		cout << ans + a[i] << " " ;
	}
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
