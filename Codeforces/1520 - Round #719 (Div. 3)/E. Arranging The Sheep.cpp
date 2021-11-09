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
	string s ;
	cin >> s ;
	int st = 0 ;
	for(auto i:s)
	{
		if(i == '*')
		{
			st++ ;
		}
	}
	st /= 2 ;
	int cnt = -1 , pos = -1 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == '*')
		{
			cnt++ ;
			if(cnt == st)
			{
				pos = i ;
				break ;
			}
		}
	}
	int ans = 0 ;
	cnt = pos - st ;
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == '*')
		{
			ans += abs(cnt - i) ;
			cnt++ ;
		}
	}
	cout << ans ;
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
