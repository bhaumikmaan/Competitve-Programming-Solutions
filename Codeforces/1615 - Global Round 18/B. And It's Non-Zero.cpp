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
typedef vector<int> vi;
typedef vector<vector<int>> vvi ; 
int a[20][N] ;
void pre()
{
	for(int i = 0 ; i < 20 ; i++)
	{
		for(int j = 1 ; j < N ; j++)
		{
			a[i][j] = a[i][j - 1] ;
			if(!((j >> i)&1))
			{
				a[i][j]++ ;
			}
		}
	}
}
void solve()
{
	int l , r ;
	cin >> l >> r ;
	int ans = r - l + 1 ;
	l-- ; 
	for(int i = 0 ; i < 20 ; i++)
	{
		ans = min(ans , a[i][r] - a[i][l]) ;	
	}
	cout << ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    pre() ;
	while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    	
