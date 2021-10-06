/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1174/problem/B
// Solution Link: https://codeforces.com/contest/1174/submission/130976436

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
	vector<int> a(n) ;
	bool even = false , odd = false ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		if(a[i]&1)
		{
			odd = true ;
		}
		else
		{
			even = true ;
		}
	}
	if(odd && even)
	{
		sort(all(a)) ;
	}
	for(auto i:a)
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
