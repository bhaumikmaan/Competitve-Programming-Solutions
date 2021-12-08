/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 30010
using namespace std ;
int fr[N], f[N] ;
int dp[N][600] ;
int last ;
int sol(int x, int y)
{
	int curr = f[y + 500] ;
	if(dp[x][curr] != -1)
	{
		return dp[x][curr] ;
	} 
	int ans = 0 ;
	for(int i = -1 ; i <= 1 ; i++)
	{
		if(x + y + i >= 0 && x + y + i <= last)
		{
			if(x + y + i > x)
			{
				ans = max(ans , sol(x + y + i , y + i)) ;
			}
		}
	}
	dp[x][curr] = ans + fr[x] ;
	return dp[x][curr] ;
}
void solve()
{
	memset(dp , -1 , sizeof(dp)) ;
	int n , d ;
	cin >> n >> d ;
	last = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		int x ;
		cin >> x ;
		fr[x]++ ;
		last = x ;
	}
	int x = 0 ;
	for(int i = 200 ; i <= 800 ; i++)
	{
		f[d + i] = x ;
		x++ ;
	}
	int ans = sol(d , d) ;
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
