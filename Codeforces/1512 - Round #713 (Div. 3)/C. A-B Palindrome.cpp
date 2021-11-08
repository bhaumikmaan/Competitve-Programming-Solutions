/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve( )
{
	int x , y ;
	cin >> x >> y ;
	string s ;
	cin >> s ;
	int ans = 0 ;
	int l = s.length() ;
	for(int i = 0 ; i < l ; i++)
	{
		if(s[i] != '?' && s[l - i - 1] != '?' && s[i] != s[l - i - 1])
		{
			ans = 1 ;
		}
	}
	if(ans)
	{
		cout << -1 ;
		return ;
	}
	for(int i = 0 ; i < l ; i++)
	{
		if(s[l - i - 1] != '?')
		{
			s[i] = s[l - i - 1] ;
		}
		if(s[i] != '?')
		{
			s[l - i - 1] = s[i] ;
		}
	}
	for(auto i:s)
	{
		if(i == '0')
		{
			x-- ;	
		}
		if(i == '1')
		{
			y-- ;
		}
	}
	if(x < 0 || y < 0)
	{
		cout << -1 ;
		return ;
	}
	if(x&1 && y&1)
	{
		cout << -1 ;
		return ;
	}
	if(x&1)
	{
		s[l/2] = '0' ;
		x-- ;
	}
	if(y&1)
	{
		s[l/2] = '1' ;
		y-- ;
	}
	for(int i = 0 ; i < l ; i++)
	{
		if(s[i] == '?' && s[l - i - 1] == '?')
		{
			if(x > 0)
			{
				s[i] = s[l - i - 1] = '0' ;
				x -= 2 ;
				if(l - i - 1 == i)
				{
					x++ ;
				}
			}
			else
			{
				s[i] = s[l - i - 1] = '1' ;
				y -= 2 ;
				if(l - i - 1 == i)
				{
					y++ ;
				}
			}
		}
	}
	if(x < 0 || y < 0)
	{
		cout << -1 ;
	}
	else
	{
		cout << s ;
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
