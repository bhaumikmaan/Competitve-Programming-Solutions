/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
void solve()
{
	int n , d ;
	cin >> n >> d ;
	vector<pair<int,int>> v(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i].first >> v[i].second ;
	}
	sort(all(v)) ;
	int a[n] ;
	a[0] = v[0].second ;
	for(int i = 1 ; i < n ; i++)
	{
		a[i] = a[i - 1] + v[i].second ;
	}
	int ans = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		int x = lower_bound(all(v) , pair<int,int>(v[i].first + d , -1)) - v.begin() - 1 ;
		ans = max(ans , a[x] - a[i] + v[i].second) ;
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
