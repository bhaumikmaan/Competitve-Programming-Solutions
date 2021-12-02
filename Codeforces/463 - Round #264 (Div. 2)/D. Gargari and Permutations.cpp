/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1005
using namespace std ;
int a[N] , pos[N] , b[5][N] , dp[N] ;
int n , k ;
bool check(int x , int y)
{
	for(int i = 0 ; i < k - 1 ; i++)
	{
		if(b[i][x] > b[i][y])
		{
			return false ;
		}
	} 
	return true ;
}
void solve()
{
	cin >> n >> k ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < k - 1 ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			int x ;
			cin >> x ;
			pos[x] = j ;
		}
		for(int j = 1 ; j <= n ; j++)
		{
			b[i][j] = pos[a[j]] ;
		}
	}
	int ans = 1 ;
	dp[1] = 1 ;
	for(int i = 2 ; i <= n ; i++)
	{
		dp[i] = 1 ;
		for(int j = 1 ; j < i ; j++)
		{
			if(check(j , i))
			{
				dp[i] = max(dp[i] , dp[j] + 1) ;
			}
			ans = max(ans , dp[i]) ;
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
