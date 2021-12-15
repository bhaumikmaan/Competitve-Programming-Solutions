/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100007
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	int a[n + 1] ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	int g1 = 0 , g2 = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		if(i&1)
		{
			if(!g1)
			{
				g1 = a[i] ;
			}
			else
			{
				g1 = __gcd(g1 , a[i]) ;
			}
		}
		else
		{
			if(!g2)
			{
				g2 = a[i] ;
			}
			else
			{
				g2 = __gcd(g2 , a[i]) ;
			}
		}
	}
	if(g1 == g2 && g1 == 1)
	{
		cout << 0 ;
		return ;
	}
	bool flag = true ;
	for(int i = 1 ; i <= n ; i++)
	{
		if(i&1)
		{
			if(!(a[i]%g2))
			{
				flag = false ;
			}
		}
	}
	if(flag)
	{
		cout << g2 ;
		return ;
	}
	flag = true ; 
	for(int i = 1 ; i <= n ; i++)
	{
		if(!(i&1))
		{
			if(!(a[i]%g1))
			{
				flag = false ;
			}
		}
	}
	if(flag)
	{
		cout << g1 ;
		return ;
	}
	cout << 0 ;
	
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
