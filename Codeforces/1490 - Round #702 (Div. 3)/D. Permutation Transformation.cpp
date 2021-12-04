/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 3000010
using namespace std ;
int a[110] , d[110] ;
int n ;
void dfs(int l , int r , int x)
{
	if(l > r)
	{
		return ;
	}
	int p , e = 0 ;
	for(int i = l ; i <= r ; i++)
	{
		if(e < a[i])
		{
			e = a[i] ;
			p = i ;
		}
	}
	d[e] = x ;
	dfs(l , p - 1 , x + 1) ;
	dfs(p + 1 , r , x + 1) ;
}
void solve()
{
	// int n ;
	cin >> n ;
	// int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	memset(d , 0 , sizeof(d)) ;
	dfs(0 , n - 1 , 0) ;
	for(int i = 0 ; i < n ; i++)
	{
		cout << d[a[i]] << " " ;
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
