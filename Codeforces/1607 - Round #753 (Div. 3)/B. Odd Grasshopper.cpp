/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
void solve( )
{
	int x , n ;
	cin >> x >> n ;
	int ans = 0 ;
	if(n%4 == 0)
	{
		ans = 0 ;
	}
	else if(n%4 == 1)
	{
		ans = -n ;
	}
	else if(n%4 == 2)
	{
		ans = 1 ;
	}
	else
	{
		ans = n + 1 ;
	}
	if(abs(x)&1)
	{
		ans *= -1 ;
	}
	cout << x + ans ;
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
