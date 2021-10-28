/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200100
using namespace std ;
vector<int> gr[N];
bool v[N] ;
int flag = 1 ;
void dfs(int x)
{
	v[x] = 1 ;
	if(gr[x].size() != 2)
	{
		flag = 0 ;
	}
	for(auto i:gr[x])
	{
		if(!v[i])
		{
			dfs(i) ;
		}
	}
}
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	for(int i = 0 ; i < m ; i++)
	{
		int a , b ;
		cin >> a >> b ;
		a-- , b-- ;
		gr[a].pb(b) ;
		gr[b].pb(a) ;
	}
	int ans = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(!v[i])
		{
			flag = true ;
			dfs(i) ;
			ans += flag ;
		}
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
