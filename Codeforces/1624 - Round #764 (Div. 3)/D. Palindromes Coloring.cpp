/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 400005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int n , k ;
	cin >> n >> k ;
	string s ;
	cin >> s ;
	map<char,int> m ;
	for(auto i:s)
	{
		m[i]++ ;
	}
	int o = 0 , t = 0 ; 
	for(auto i:m)
	{
		o += i.second%2 ;
		t += i.second/2 ;
	}
	int x = t/k , r = k - t%k , ans = 0 ;
	if(o < r)
	{
		ans = 2*x ;
		o += 2*(t%k) ;
		if(o >= k)
		{
			ans++ ;
		}
	}
	else
	{
		ans = 2*x + 1 ;
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
