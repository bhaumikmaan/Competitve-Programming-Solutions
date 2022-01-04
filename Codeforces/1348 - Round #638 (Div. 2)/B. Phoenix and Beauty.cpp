/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
// #define int ll  
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	set<int> s ;
	for(int i = 0 ; i < n ; i++)
	{
		int a ;
		cin >> a ;
		s.insert(a) ;
	}
	if(s.size() > k)
	{
		cout << -1 ;
		return ;
	}
	int rem = k - s.size() ;
	cout << n*k << "\n" ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < rem ; j++)
		{
			cout << 1 << " " ;
		}
		for(auto x:s)
		{
			cout << x << " " ;
		}
	}
	
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
