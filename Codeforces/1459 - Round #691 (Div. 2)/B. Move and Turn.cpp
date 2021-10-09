/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1459/problem/B
// Solution Link: https://codeforces.com/contest/1459/submission/130977622

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
	if(n&1)
	{
		n = (n + 1)/2 ;
		int ans = n*(n + 1)/2 ;
		cout << 4*ans ;
	}
	else
	{
		cout << (n/2 + 1)*(n/2 + 1) ;
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
