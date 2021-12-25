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
void solve()
{
	int n ;
	cin >> n ;
	string s , t ;
	cin >> s >> t ;
	vi a(n) , b(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		a[i] = s[i] - '0' ;
		b[i] = t[i] - '0' ;
	}
	int ans = inf ;
	for(int i = 0 ; i < 2 ; i++)
	{
		vi copy(n) ;
		copy = a ;
		for(int j = 0 ; j < n ; j++)
		{
			copy[j] ^= i ; // flip
		}
		int x = 0 , y = 0 ;
		for(int j = 0 ; j < n ; j++)
		{
			if(copy[j] != b[j])
			{
				if(copy[j])
				{
					x++ ;
				}
				else
				{
					y++ ;
				}
			}
		}
		if(y == x + i)
		{
			ans = min(ans , x + y) ;
		}
	}
	if(ans == inf)
	{
		cout << -1 ;
	}
	else
	{
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
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    	
