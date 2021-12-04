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
	int sum = 0 ;
	vector<pair<int,int>> a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		a[i] = {x , i} ;
		sum += x ;
	}
	sort(all(a)) ;
	vector<int> ans ;
	ans.pb(a.back().second + 1) ;
	for(int i = n - 1 ; i > 0 ; i--)
	{
		sum -= a[i].first ;
		if(sum >= a[i].first)
		{
			ans.pb(a[i-1].second + 1) ;
		}
		else
		{
			break ;
		}
	}
	sort(all(ans)) ;
	cout << ans.size() << "\n" ;
	for(auto i:ans)
	{
		cout << i << " " ; 
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
        cout << "\n" ;
    }
    return 0 ;
}    
