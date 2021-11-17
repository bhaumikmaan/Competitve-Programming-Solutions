/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000005
using namespace std ;
int vis[N] ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		vis[a[i]] = 0 ;
	}
	int ans = 0 , c = 0 , l = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(vis[a[i]] == 0)
		{
			c += a[i] ;
		}
		vis[a[i]]++ ;
		while(c > k)
		{
			vis[a[l]]-- ;
			if(vis[a[l]] == 0)
			{
				c -= a[l] ;
			}
			l++ ;
		}
		ans = max(ans , i - l + 1) ;
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
