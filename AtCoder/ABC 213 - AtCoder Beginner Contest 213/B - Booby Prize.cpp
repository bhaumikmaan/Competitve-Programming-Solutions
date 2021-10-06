/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://atcoder.jp/contests/abc215/tasks/abc213_b
// Solution Link: https://atcoder.jp/contests/abc213/submissions/24861985

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
    	int n ;
    	cin >> n ;
    	int a[n+1] ;
    	map<int,int> m ;
    	for(int i = 1 ; i <= n ; i++)
    	{
    		cin >> a[i] ;
    		m[a[i]] = i ;
    	} 
    	sort(a + 1 , a + n + 1) ;
    	cout << m[a[n-1]] ;
        cout << "\n" ;
    }
    return 0 ;
}    
