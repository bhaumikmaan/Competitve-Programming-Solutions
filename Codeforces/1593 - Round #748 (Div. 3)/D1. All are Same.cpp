/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	sort(a , a + n) ;
	int ans ; 
	if(a[n - 1] > a[0])
	{
		ans = 0 ;
		for(int i = 1 ; i < n ; i++)
		{
			if(a[i] != a[i - 1])
			{
				if(ans == 0)
				{
					ans = a[i] - a[0] ;
				}
				else
				{
					ans = __gcd(ans , a[i] - a[0]) ;
				}
			}
		}
		cout << ans ;
	}
	else
	{
		cout << -1 ;
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
