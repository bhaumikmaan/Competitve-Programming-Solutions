/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 998244353
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve( )
{
	int n , k ;
	cin >> n >> k ;
	string s ;
	cin >> s ; 
	string ans = "" ;
	ans += s[0] ;
	int ind = 0 ;
	for(int i = 1 ; i < n ; i++)
	{
		if(s[i] > s[ind])
		{
			break ;
		}
		if(s[i] == s[ind])
		{
			ind++ ;
		}
		else
		{
			ind = 0 ;
		}
		ans += s[i] ;
	}
	while(ind)
	{
		ind-- ;
		ans.pop_back() ;
	}
	for(int i = 0 ; i < k ; i++)
	{
		cout << ans[i%ans.length()] ;
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
