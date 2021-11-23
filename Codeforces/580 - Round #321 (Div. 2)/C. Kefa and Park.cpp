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
vector<int> g[N] ;
int a[N] , vis[N] ;
int n , m , ans ;
int k = 0 , pre = -1 ;
void dfs(int x , int k , int pre)
{
	if(a[x])
	{
		k++ ;
	}
	else
	{
		k = 0 ;
	}
	if(k > m)
	{
		return ;
	}
	if(g[x].size() == 1 && pre != -1)
	{
		ans++ ;
		return ;
	}
	for(int i = 0 ; i < g[x].size() ; i++)
	{
		if(g[x][i] != pre)
		{
			dfs(g[x][i] , k , x	) ;
		}
	}
}
void solve()
{
	cin >> n >> m ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int x , y ;
		cin >> x >> y ;
		x-- , y-- ;
		g[x].pb(y) ;
		g[y].pb(x) ;
	}
	ans = 0 ;
	dfs(0 , k , pre) ;
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
