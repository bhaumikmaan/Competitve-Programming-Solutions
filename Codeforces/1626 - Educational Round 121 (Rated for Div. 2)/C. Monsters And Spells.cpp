/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 155555
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int n ;
	cin >> n ;
	vi k(n) , h(n) ;
	for(auto &I:k)
	{
		cin >> I ;
	}
	for(auto &I:h)
	{
		cin >> I ;
	}
	for(int i = n - 2 ; i >= 0 ; i--)
	{
		h[i] = max(h[i] , h[i + 1] - k[i + 1] + k[i]) ;
	}
	int pre = h[0] , ans = (h[0]*(h[0] + 1))/2 ;
	for(int i = 1 ; i < n ; i++)
	{
		if(k[i] - k[i - 1] >= h[i])
		{
			pre = h[i] ;
			ans += (pre*(pre + 1))/2 ;
		}
		else
		{
			ans -= (pre*(pre + 1))/2 ; 
			pre += k[i] - k[i - 1] ;
			ans += (pre*(pre + 1))/2 ;
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
