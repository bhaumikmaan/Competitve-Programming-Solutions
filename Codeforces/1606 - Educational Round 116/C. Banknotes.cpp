/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
int powermc(int a , int b)
{
    int s = 1 ;
    for(int i = 0; i < b; i++)
    {
        s *= a ;
    }
    return s ;
}
void solve( )
{
	int n , k ;
	cin >> n >> k ;
	k++ ;
	int ans = 0 ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < n - 1 ; i++)
	{
		if(k > 0)
		{
			int p = powermc(10 , a[i+1] - a[i]) ;
			p-- ;
			int mn = min(p , k) ;
			k -= mn ;
			ans += powermc(10,a[i])*mn ;
		}
	}
        ans += k*powermc(10 , a[n-1]) ;
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
