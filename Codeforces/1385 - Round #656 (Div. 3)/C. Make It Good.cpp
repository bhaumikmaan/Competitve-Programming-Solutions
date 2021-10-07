/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1385/problem/C
// Solution Link: https://codeforces.com/contest/1385/submission/125064404

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
	int ans = n - 1 ;
	while(ans && a[ans-1] >= a[ans])
	{
		ans-- ;
	}
	while(ans && a[ans-1] <= a[ans])
	{
		ans-- ;
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
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
