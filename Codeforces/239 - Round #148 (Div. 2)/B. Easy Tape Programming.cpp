/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
// #define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
char s[199];
int n , q ;
void query(int l , int r)
{
	vector<char> v(r - l + 1) ;
	for(int i = l ; i <= r ; i++)
	{
		v[i - l] = s[i] ;
	}
	int a[19] ;
	for(int i = 0 ; i < 10 ; i++)
	{
		a[i] = 0 ;
	}
	int c = 0 , d = 1 ;
	while(c >= 0 && c <= int(v.size()) - 1)
	{
		if(v[c] >= '0' && v[c] <= '9')
		{
			a[v[c]- '0'] ++ ;
			if(v[c] == '0')
			{
				v.erase(v.begin() + c) ;
				if(d == -1)
				{
					c += d ;
				}		
			}
			else
			{
				v[c]-- ;
				c += d ;
			}
		}
		else
		{
			if(v[c] == '<')
			{
				d = -1 ;
			}
			else
			{
				d = 1 ;
			}
			c += d ;
			if(v[c] == '<' || v[c] == '>')
			{
				v.erase(v.begin() + c - d) ;
				if(d == 1)
				{
					c-- ;
				}
			}
		}
	}
	for(int i = 0 ; i < 10 ; i++)
	{
		cout << a[i] << " " ;
	}
}
void solve()
{
	cin >> n >> q ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> s[i] ;
	}
	for(int t = 1 ; t <= q ; t++)
	{
		int l , r ;
		cin >> l >> r ;
		query(l , r) ;
		cout << "\n" ;
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
