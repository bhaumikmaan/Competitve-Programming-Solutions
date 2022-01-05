/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000001
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n ;
	cin >> n ;
	vvi a(2*n , vi(2*n)) ;
	int ans = 0 ;
	for(int i = 0 ; i < 2*n ; i++)
	{
		for(int j = 0 ; j < 2*n ; j++)
		{
			cin >> a[i][j] ;
			if(i >= n && j >= n)
			{
				ans += a[i][j] ;
			}
		}
	}
	int x = min({a[n][0] , a[n][n - 1] , a[2*n - 1][0] , a[2*n - 1][n - 1]}) ;
	x = min({x, a[0][n], a[n - 1][n], a[0][2*n - 1], a[n - 1][2*n - 1]}) ;
	ans += x ;
	cout << ans ;
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
