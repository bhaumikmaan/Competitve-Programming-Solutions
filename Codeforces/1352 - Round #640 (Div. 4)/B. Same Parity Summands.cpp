/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	if(k > n)
	{
		cout << "NO" ;
		return ;
	}
	int c = n - k + 1 ;
	if(c > 0 && c%2)
	{
		cout << "YES\n" ;
		k-- ;
		while(k--)
		{
			cout << "1 " ;
		}
		cout << c ;
		return ;
	}
	c = n - 2*k + 2 ;
	if(c > 0 && c%2 == 0)
	{
		cout << "YES\n" ;
		k-- ;
		while(k--)
		{
			cout << "2 " ;
		}
		cout << c ;
		return ;
	}
	cout << "NO" ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
