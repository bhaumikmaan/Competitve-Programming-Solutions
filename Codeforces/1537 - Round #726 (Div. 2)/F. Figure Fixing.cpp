/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
vi g[N] ;
int a[N] , col[N] ;
int n , m , ans ;
void setval()
{
	for(int i = 0 ; i < n ; i++)
	{
		col[i] = -1 ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		a[i] = 0 ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		g[i].clear() ;
	}
}
void dfs(int v , int c)
{
	col[v] = c ;
	for(auto i:g[v])
	{
		if(col[i] != -1)
		{
			if(col[i] + c != 1)
			{
				ans = 0 ;
			}
		}
		else
		{
			dfs(i , 1 - c) ;
			a[v] -= a[i] ;
			a[i] = 0 ;
		}
	}
}
void solve()
{
	// int n , m ;
	cin >> n >> m ;
	setval() ;
	vi v(n) , gt(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i] ;
	} 
	for(int i = 0 ; i < n ; i++)
	{
		cin >> gt[i] ;
	} 
	for(int i = 0 ; i < n ; i++)
	{
		a[i] = gt[i] - v[i] ;
	}
	int sum = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		sum += a[i] ;
	}
	for(int i = 0 ; i < m ; i++)
	{
		int u , v ;
		cin >> u >> v ;
		u-- , v-- ;
		g[u].pb(v) ;
		g[v].pb(u) ;
	}
	if(abs(sum)&1)
	{
		cout << "NO" ;
		return ;
	}
	ans = 1 ;
	dfs(0 , 0) ;
	if(!ans || !a[0])
	{
		haan ;
	}
	else
	{
		cout << "NO" ;
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
