/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e9
#define N 100010
using namespace std ;
void solve()
{
	int a , b ;
	cin >> a >> b ;
	int ans = 0 , d = 1 ;
	for(int i = 0 ; i < 10 ; i++)
	{
		ans += b/d - a/d ;
		d *= 10 ;
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
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
