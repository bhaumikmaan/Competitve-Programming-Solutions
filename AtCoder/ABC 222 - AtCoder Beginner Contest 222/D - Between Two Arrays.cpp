/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 998244353
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	int a[n] , b[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		cin >> b[i] ;
	}
	vector<vector<int>> dp(n+1,vector<int>(3001,0)) ;
	dp[0][0] = 1 ;
	for(int i = 0 ; i <= n ; i++)
	{
		for(int j = 0 ; j < 3000 ; j++)
		{
			dp[i][j + 1] += dp[i][j] ;
			dp[i][j + 1] %= mod ;
		}
		if(i != n)
		{
			for(int j = a[i] ; j <= b[i] ; j++)
			{
				
				dp[i + 1][j] += dp[i][j] ;
				dp[i + 1][j] %= mod ;
			}
		}
	}
	cout << dp[n][3000] ;
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
