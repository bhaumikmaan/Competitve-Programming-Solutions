/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1581/problem/A
// Solution Link: https://codeforces.com/contest/1581/submission/130351214

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	int ans = 1 ;
	for(int i = 2*n ; i >= 3 ; i--)
	{
        ans *= i ;
        ans %= mod ;
    }
	cout << (ans)%mod ;
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
