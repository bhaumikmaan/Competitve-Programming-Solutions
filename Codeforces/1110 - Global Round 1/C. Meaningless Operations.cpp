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
	int n ;
	cin >> n ;
	if((n&(n+1)) == 0)
	{
		for(int i = 2 ; i*i <= n ; i++)
		{
			if(n%i == 0)
			{
				cout << n/i ;
				return ;
			}
		}
		cout << 1 ;
		return ;
	}
	int cnt = 0 ;
	while(n)
	{
		cnt++ ;
		n /= 2 ;
	}
	cout << (1LL<<cnt) - 1 ;
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
