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
int get(int x , int p)
{
	vector<int> v ;
	int r = x ;
	while(x)
	{
		v.pb(x%10) ;
		x /= 10 ;
	}
	for(auto i:v)
	{
		r *= 10 ;
		r += i ;
		r %= p ;
	}
	return r ;
}
void solve()
{
	int k , p ;
	cin >> k >> p ;
	int ans = 0 , it = 1 ;
	for(int i = 1 ; i <= k ; i++)
	{
		int x = get(it , p) ;
		it++ ;
		ans += x ;
		ans %= p ;
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
