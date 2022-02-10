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
double dp[2010][2010] ;
void solve()
{
	int n , t ;
	double p ;
	cin >> n >> p >> t ;
	dp[0][0] = 1.0 ;
	for(int i = 0 ; i <= t ; i++)
	{
		for(int j = 0 ; j <= n ; j++)
		{
			if(j == n)
			{
				dp[i + 1][j] += dp[i][j] ;
			}
			else
			{
				dp[i + 1][j] += dp[i][j]*(1 - p) ;
				dp[i + 1][j + 1] += dp[i][j]*p ;
			}
		}
	}
	double ans = 0.0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		ans += dp[t][i]*i ;
	}
	cout << fixed << setprecision(10) << ans ;
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
