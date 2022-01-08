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
	int n , m , k ;
	cin >> n >> m >> k ;
	vi a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int ans = 0 , cnt = 0 , sum = 0 ;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		if(sum + a[i] <= k)
		{
			sum += a[i] ;
		}
		else
		{
			cnt++ ;
			sum = a[i] ;
		}
		if(cnt == m)
		{
			break ;
		}
		ans++ ;
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
