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
vector<pair<int,int>> v ;
multiset<int> m ;
void solve()
{
	v.clear() ;
	m.clear() ;
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++)
	{
		int x , y ;
		cin >> x >> y ;
		v.pb({x , y}) ;
	}
	sort(all(v)) ;
	int ans = 0 , cnt = 0 ;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		m.insert(v[i].second) ;
		if(v[i].first - i > cnt)
		{
			cnt++ ;
			int x = *m.begin() ;
			ans += x ;
			m.erase(m.find(x)) ;
		}
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
