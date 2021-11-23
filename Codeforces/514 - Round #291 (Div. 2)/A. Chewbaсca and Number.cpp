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
	string s ;
	cin >> s ;
	int n = s.length() ;
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == '9' && i == 0)
		{
			continue ;
		}
		if(s[i] >= '5')
		{
			int x = s[i] - '0' ;
			x = 9 - x;
			s[i] = x + '0' ;
 		}
	}
	cout << s ;
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
