/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200
using namespace std ;
vector<pair<int,int>> g[N] ;
bool vis[N] ;
bool dfs(int v , int c , int d)
{
	if(vis[v])
	{
		return false ;
	}
	if(v == d)
	{
		return true ;
	}
	vis[v] = true ;
	for(auto p:g[v])
	{
		if(p.second == c)
		{
			if(dfs(p.first , c , d))
			{
				return true ;
			}
		}
	}
	return false ;
}
void solve()
{
	int n , m ;
	cin >> n >> m ;
	for(int i = 0 ; i < m ; i++)
	{
		int a , b , c ;
		cin >> a >> b >> c ;
		a-- , b-- ;
		g[a].pb({b , c}) ;
		g[b].pb({a , c}) ;
	}
	int q ;
	cin >> q ;
	while(q--)
	{
		int ans = 0 ;
		int a , b ;
		cin >> a >> b ;
		a-- , b-- ;
		for(int i = 1 ; i <= m ; i++)
		{
			memset(vis , false , sizeof(vis)) ;
			if(dfs(a , i , b))
			{
				ans++ ;
			}
		}
		cout << ans << "\n" ;
	}
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
