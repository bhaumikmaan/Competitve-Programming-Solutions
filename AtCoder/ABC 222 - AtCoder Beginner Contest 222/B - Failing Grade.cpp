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
void solve( )
{
	int n , k ;
	cin >> n >> k ;
	int cnt = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		if(x < k)
		{
			cnt++ ;
		}
	}
	cout << cnt ;
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
