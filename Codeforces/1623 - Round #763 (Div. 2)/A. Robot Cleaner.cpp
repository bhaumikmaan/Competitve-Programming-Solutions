/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200008
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n , m , cb , rb , rd , cd ;
	cin >> n >> m >> rb >> cb >> rd >> cd ;
	int ans = inf ;
	if(rd >= rb)
	{
		ans = min(ans , rd - rb) ;
	}
	else
	{
		ans = min(ans , n - rb + n - rd) ;
	}
	if(cd >= cb)
	{
		ans = min(ans , cd - cb) ;
	}
	else
	{
		ans = min(ans , m - cb + m - cd) ;
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
