/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/285/problem/A
// Solution Link: https://codeforces.com/contest/285/submission/121828061

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
	for(int i = n ; i > n - k ; i--)
	{
		cout << i << " " ;
	}
	for(int i = 1 ; i <= n - k ; i++)
	{
		cout << i << " " ;
	}
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
