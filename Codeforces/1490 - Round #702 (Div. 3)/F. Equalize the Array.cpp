/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000007
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	map<int,int> m ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		m[x]++ ;
	}
	vector<int> v ;
	for(auto i:m)
	{
		v.pb(i.second) ;
	}
	sort(all(v)) ;
	int sum = 0 ;
	for(auto i:v)
	{
		sum += i ;
	}
	int ans = inf ;
	for(int i = 0 ; i < v.size() ; i++)
	{
		ans = min(ans , sum - v[i]*((int)v.size() - i)) ;
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
