/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
void solve()
{
	int n , s ;
	cin >> n >> s ;
	int ans = -1 ;
	int a[n] , b[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] >> b[i] ;
		int x = a[i] ;
		if(b[i] > 0)
		{
			x++ ;
		}
		if(s >= x)
		{
			if(b[i] == 0)
			{
				ans = max(ans , 0LL) ;
			}
			else
			{
				int y = 100 - b[i] ;
				ans = max(ans , y) ;
			}
		}
	}
	cout << ans ;
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
