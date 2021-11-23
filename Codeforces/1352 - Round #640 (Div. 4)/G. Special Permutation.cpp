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
	int n ;
	cin >> n ;
	if(n < 4)
	{
		cout << -1 ;
	}
	else
	{
		vector<int> ans ;
		for(int i = 2 ; i <= n ; i+=2)
		{
			if(i != 4)
			{
				ans.pb(i) ;
			}
		}
		reverse(all(ans)) ;
		ans.pb(4) ;
		for(int i = 1 ; i <= n ; i+=2)
		{
			ans.pb(i) ;
		}
		for(auto i:ans)
		{
			cout << i << " " ;
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
