/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/285/problem/C
// Solution Link: https://codeforces.com/contest/285/submission/121423982

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
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	sort(a , a + n) ;
	int ans = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		ans += abs(a[i] - i - 1) ;
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
