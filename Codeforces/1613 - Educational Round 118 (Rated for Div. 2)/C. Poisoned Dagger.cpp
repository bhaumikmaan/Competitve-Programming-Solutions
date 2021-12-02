/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
int n , h ;
int a[500] ;
bool check(int x)
{
	int temp = 0 ;
	for(int i = 1 ; i < n ; i++)
	{
		if(a[i] + x <= a[i+1] )
		{
			temp += x ;
		}
		else
		{
			temp += a[i + 1] - a[i] ;
		}
	}
	temp += x ;
	if(temp < h)
	{
		return false ;
	}
	return true ;
}
void solve( )
{
	// int n ;
	cin >> n >> h ;
	// vector<int> a(n + 1) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	sort(a + 1 , a + n + 1) ;
	int l = 1 , r = h  , ans = inf ;
	while(l <= r)
	{
		int m = (l + r)>>1 ;
		if(check(m))
		{
			ans = m ;
			r = m - 1 ;
		}
		else
		{
			l = m + 1 ;
		}
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
