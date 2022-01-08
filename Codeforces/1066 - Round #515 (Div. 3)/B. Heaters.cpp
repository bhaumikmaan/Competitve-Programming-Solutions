/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n , r ;
	cin >> n >> r ;
	vi a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int p = 0 , ans = 0 ;
	while(p < n)
	{
		ans++ ;
		int l = -1 ;
		for(int i = 0 ; i < n && i - p < r ; i++)
		{
			if(i + r > p)
			{
				if(a[i] == 1)
				{
					l = i ;
				}
			}
		}
		if(l == -1)
		{
			cout << -1 ;
			return ;
		}
		p = l + r ;
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
