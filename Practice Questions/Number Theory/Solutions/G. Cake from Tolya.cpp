/***	KNOWLEDGE IS POWER	***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int GCDD(int a , int b)
{
	if(b)
	{
		return __gcd(b , a%b) ;
	}
	return a ;
}
void solve()
{
	int m , n ;
	cin >> m >> n ;
	int ans = n + m - GCDD(m , n) ;
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
