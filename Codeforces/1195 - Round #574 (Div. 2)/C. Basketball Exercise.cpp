/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 998244353
#define inf LLONG_MAX
#define N 100010
using namespace std ;
int ans1[N] , ans2[N] ;
void solve( )
{
	int n ;
	cin >> n ;
	int in1[n + 1] , in2[n + 1] ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> in1[i] ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> in2[i] ;
	}
	ans1[0] = 0 ;
	ans2[0] = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		ans1[i] = max(ans1[i-1] , ans2[i - 1] + in1[i]) ;
		ans2[i] = max(ans2[i-1] , ans1[i - 1] + in2[i]) ;
	}
	cout << max(ans1[n] , ans2[n]) ;
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
