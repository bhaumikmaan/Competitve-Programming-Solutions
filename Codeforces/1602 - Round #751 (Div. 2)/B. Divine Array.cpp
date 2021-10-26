/***   KNOWLEDGE IS POWER ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
vector<int> a ;
vector<vector<int>> v ;
void solve( )
{
	int n ;
	cin >> n ;
	a.resize(n) ;
	v.clear() ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	v.pb(a) ;
	while(true)
	{
		vector<int> cnt(n + 1 , 0) , ans ;
		for(auto j:v.back())
		{
			cnt[j]++ ;
		}
		for(auto j:v.back())
		{
			ans.pb(cnt[j]) ;
		}
		if(ans == v.back())
		{
			break ;
		}
		v.pb(ans) ;
	}
	int q ;
	cin >> q ;
	while(q--)
	{
		int x , y ;
		cin >> x >> y ;
		int f = v.size() - 1 ;
		f = min(f , y) ;
		cout << v[f][x - 1] ;
		cout << "\n" ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        // cout << "\n" ;
    }
    return 0 ;
}    
