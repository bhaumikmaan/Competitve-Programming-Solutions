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
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	sort(all(a)) ;
	int ans = 0 , l = 0 , r = n - 1 ;
	while(l <= r)
	{
		if(a[r] >= k)
		{
			ans++ ;
			r-- ;
		}
		else if(a[l] + a[r] >= k && l != r)
		{
			ans++ ;
			l++ ;
			r-- ;
		}
		else
		{
			l++ ;
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
