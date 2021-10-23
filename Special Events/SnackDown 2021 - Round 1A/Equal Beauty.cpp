/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	sort(all(a)) ;
	if(n == 2)
	{
		cout << 0 ;
	}
	else if(n == 3)
	{
		cout << min(a[1] - a[0] , a[2] - a[1]) ;
	}
	else
	{
		int x = 0 , y = 0 ;
		for(int i = 0 ; i < n - 1 ; i++)
		{
			x += abs((a[i] - a[(n - 1)/2])) ;
		}
		for(int i = 1 ; i < n ; i++)
		{
			y += abs((a[i] - a[(n + 1)/2])) ;
		}
		int mn = min(x , y) ;
		// cout << mn ;
		int l = 1 , r = n - 2 ;
		int ans = mn ;
		while(l < r)
		{
			int x = a[n - 1] - a[l] , y = a[r] - a[0] ;
			ans = min(ans , abs(x - y)) ;
			if(y < x)
			{
				l++ ;
			}
			else
			{
				r-- ;
			}
		}
		cout << ans ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
    	cout << "\n" ;
    }
    return 0 ;
}    
