/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 155555
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int n , m ;
	cin >> n >> m ;
	string s ;
	cin >> s ;
	vi sum(m , 0) ;
	vvi cnt(m , vi(26 , 0)) ;
	for(int i = 0 ; i < n ; i++)
	{
		int mn = min(i%m , m - 1 - i%m) ;
		sum[mn]++ ;
		cnt[mn][s[i] - 'a']++ ;
	}
	int ans = 0 ;
	for(int i = 0 ; i < m ; i++)
	{
		if(sum[i])
		{
			ans += sum[i] ;
			int mx = 0 ;
			for(int j = 0 ; j < 26 ; j++)
			{
				mx = max(mx , cnt[i][j]) ;
			}
			ans -= mx ;
		}
	}
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
