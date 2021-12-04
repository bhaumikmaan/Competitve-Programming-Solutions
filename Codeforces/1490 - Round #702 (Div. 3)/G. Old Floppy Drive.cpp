/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000007
using namespace std ;
void solve()
{
	int n , m ;
	cin >> n >> m ;
	vector<int> a(n) ;
	vector<pair<int,int>> sum ;
	int curr = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		curr += a[i] ;
		if(sum.empty() || sum.back().first < curr)
		{
			sum.pb({curr , i}) ;
		}
	}
	while(m--)
	{
		int x ;
		cin >> x ;
		int ans = 0 ;
		if(curr < 1)
		{
			if(sum.back().first < x)
			{
				cout << -1 << " " ;
				continue ;
			}
		}
		else
		{
			int b = sum.back().first ;
			if(b < x)
			{
				x -= b ;
				int temp = (x + curr - 1)/curr ;
				ans = temp*n ;
				x += b ;
				x -= temp*curr ;
			}
		}
		int ans1 = 0 , l = 0 , r = sum.size() - 1 ;
		while(l <= r)
		{
			int m = (l + r)>>1 ;
			if(sum[m].first >= x)
			{
				ans1 = sum[m].second ;
				r = m - 1 ;
			}
			else
			{
				l = m + 1 ;
			}
		}
		ans += ans1 ;
		cout << ans << " " ;
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
