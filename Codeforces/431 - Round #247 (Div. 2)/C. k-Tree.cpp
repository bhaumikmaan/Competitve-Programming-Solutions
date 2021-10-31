/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
int dp[110][110][110] ;
int dfs(int n , int k , int d)
{
	int ans = 0 ;
	if(n < 0)
	{
		return 0 ;
	}
	if(n == 0)
	{
		if(d == 0)
		{
			return 1 ;
		}
		return 0 ;
	}
	if(dp[n][k][d] != -1)
	{
		return dp[n][k][d] ;
	}
	for(int i = 1 ; i <= k ; i++)
	{
		int x ;
		if(i >= d)
		{
			x = dfs(n - i , k , 0) ;
		}
		else
		{
			x = dfs(n - i , k , d) ;
		}
		ans += x ;
		ans %= mod ;
	}
	return dp[n][k][d] = ans ;
}
void solve( )
{
	memset(dp , -1 , sizeof(dp)) ;
	int n , k , d ;
	cin >> n >> k >> d ;
	cout << dfs(n , k , d) ;
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
