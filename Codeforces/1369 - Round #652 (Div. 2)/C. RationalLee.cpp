/***  KNOWLEDGE IS POWER  ***/

// Problem: C. RationalLee
// Contest: Codeforces - Codeforces Round #652 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1369/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)
 
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
	int n , k ;
	cin >> n >> k ;
	int a[n] , w[k] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int z = 0 ;
	for(int i = 0 ; i < k ; i++)
	{
		cin >> w[i] ;
		w[i]-- ;
		if(w[i] == 0)
		{
			z++ ;
			k-- ; 
			i-- ;
		}
	}
	sort(a , a + n) ;
	sort(w , w + k) ;
	int ans = 0 ;
	while(z--)
	{
		ans += 2*a[n-1] ;
		n-- ;
	}
	for(int i = 0 ; i < k ; i++)
	{
		ans += a[n-1] ;
		n-- ;
	}
	int i = 0 ;
	while(n)
	{
		ans += a[n - w[i]] ;
		n -= w[i] ;
		i++ ;
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
			/*Maango16*/
