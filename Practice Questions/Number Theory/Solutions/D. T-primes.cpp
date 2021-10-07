/***	KNOWLEDGE IS POWER	***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
bool prime(int n)
{
	if(n < 2)
	{
		return false ;
	}
	else if(n == 2)
	{
		return true ;
	}
	int lim = sqrt(n) ;
	if(n%2 == 0)
	{
		return false ;
	}
	for(int i = 3 ; i <= lim ; i+=2)
	{
		if(n%i == 0)
		{
			return false ;
		}
	}
	return true ;
}
void solve( )
{
	int n ;
	cin >> n ;
	int s = sqrt(n) ;
	if(s*s == n && prime(s))
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
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
