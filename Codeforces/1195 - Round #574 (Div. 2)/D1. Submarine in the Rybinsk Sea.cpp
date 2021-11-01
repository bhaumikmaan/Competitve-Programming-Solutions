/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 998244353
#define inf LLONG_MAX
#define N 100000
using namespace std ;
int a[20] ;
void solve( )
{
	int n ;
	cin >> n ;
	int ans = 0 ;
	for(int it = 0 ; it < n ; it++)
	{
		int x ;
		cin >> x ;
		int temp = 0 ;
		while(x)
		{
			a[temp] = x%10 ; 
			a[temp + 1] = x%10 ;
			temp += 2 ;
			x /= 10 ;
		}
		int y = 1 ;
		for(int i = 0 ; i < 20 ; i++)
		{
			ans += (y*a[i]) ;
			ans %= mod ;
			y *= 10 ;
			y %= mod ;
		}
	}
	ans *= n ;
	ans %= mod ;
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
