/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000010
using namespace std ;
int a[N] , b[N] , c[N] ;
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < m ; i++)
	{
		int x , y ;
		cin >> x >> y ;
		b[x - 1]++ ;
		b[y]-- ;
	}
	int x = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		x += b[i] ;
		c[i] = x ;
	}
	sort(a , a + n) ;
	sort(c , c + n) ;
	int ans = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		ans += (a[i]*c[i]) ;
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
