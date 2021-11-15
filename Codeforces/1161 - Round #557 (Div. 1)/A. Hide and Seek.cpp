/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
int a[N][2] ;
void solve()
{
	int n , m ;
	cin >> n >> m ;
	for(int i = 0 ; i < n ; i++)
	{
		a[i][0] = N ;
		a[i][1] = -1 ;
	}
	for(int i = 0 ; i < m ; i++)
	{
		int x ;
		cin >> x ;
		x-- ;
		if(a[x][1] == -1)
		{
			a[x][0] = i ;
		}
		a[x][1] = i ;
	}
	int ans = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i][1] == -1)
		{
			ans++ ;
		}
	}
	for(int i = 1 ; i < n ; i++)
	{
		if(a[i][0] > a[i - 1][1])
		{
			ans++ ;
		}
		if(a[i - 1][0] > a[i][1])
		{
			ans++ ;
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
