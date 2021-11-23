/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int y , k , n ;
	cin >> y >> k >> n ;
	bool flag = false ;
	for(int i = k ; i <= n ; i+=k)
	{
		if(i > y)
		{
			cout << i - y << " " ;
			flag = true ;
		}
	}
	if(!flag)
	{
		cout << -1 ;
	}
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
