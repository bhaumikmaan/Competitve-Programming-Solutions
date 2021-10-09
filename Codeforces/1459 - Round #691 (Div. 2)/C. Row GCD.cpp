/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1459/problem/C
// Solution Link: https://codeforces.com/contest/1459/submission/131286032

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	int n , m ;
    	cin >> n >> m ;
    	int a[n] , b[m] ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> a[i] ;
    	}
    	for(int i = 0 ; i < m ; i++)
    	{
    		cin >> b[i] ;
    	}
    	sort(a , a + n) ;
    	int gc = 0 ;
    	for(int i = 1 ; i < n ; i++)
    	{
    		gc = __gcd(gc , a[i] - a[i - 1]) ;
    	}
    	for(int i = 0 ; i < m ; i++)
    	{
    		cout << __gcd(gc , a[0] + b[i]) << " " ;
    	}
        cout << "\n" ;
    }
    return 0 ;
}    
