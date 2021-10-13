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
	int a , b , c ;
	cin >> a >> b >> c ;
	int mx = max(a , max(b , c)) ;
	if(a == mx)
	{
		if(b == mx || c == mx)
		{
			cout << 1 ;
		}
		else
		{
			cout << 0 ;
		}
	}
	else
	{
		cout << mx - a + 1 ;
	}
	cout << " " ;
	if(b == mx)
	{
		if(a == mx || c == mx)
		{
			cout << 1 ;
		}
		else
		{
			cout << 0 ;
		}
	}
	else
	{
		cout << mx - b + 1 ;
	}
	cout << " " ;
	if(c == mx)
	{
		if(b == mx || a == mx)
		{
			cout << 1 ;
		}
		else
		{
			cout << 0 ;
		}
	}
	else
	{
		cout << mx - c + 1 ;
	}
	cout << " " ;
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
