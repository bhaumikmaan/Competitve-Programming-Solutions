/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 110000
using namespace std ;
void solve( )
{
	string s ;
	cin >> s ;
	string ans = "" ;
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] != '/')
		{
			ans += s[i] ;
		}
		else
		{
			int ind = i ;
			while(ind < s.length() && s[ind] == '/')
			{
				ind++ ;
			}
			ans += '/' ;
			i = ind - 1 ;
		}
	} 
	while(!ans.empty() && ans.back() == '/')
	{
		ans.erase(ans.length() - 1) ;
	}
	if(ans.empty())
	{
		cout << "/" ;
	}
	else
	{
		cout << ans ;
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
