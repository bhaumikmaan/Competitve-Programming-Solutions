/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100007
using namespace std ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<int> v(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i] ;
	}
	sort(all(v));
	int ans = 0 ;
	int it = n - k - 1 ;
	while(k)
	{
		ans += (v[it]/v.back()) ;
		v.pop_back() ;
		it-- ;
		k-- ;
	}
	for(int i = 0 ; i <= it ; i++)
	{
		ans += v[i] ;
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
