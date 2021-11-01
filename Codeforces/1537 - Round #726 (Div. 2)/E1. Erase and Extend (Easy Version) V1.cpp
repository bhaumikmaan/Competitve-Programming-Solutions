/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
        int n , k ;
        cin >> n >> k ;
        string s ;
        cin >> s ;
        string ans = "}" ;
        string chk = "" ;
        for(int i = 0 ; i < n ; i++)
        {
        	chk += s[i] ;
        	int l = chk.length() ;
        	int curr = 0 ;
        	string mn = "" ;
        	while(mn.length() < k)
        	{
        		mn += chk[curr%l] ;
        		curr++ ;
        	}
        	ans = min(ans , mn) ;
        }
        cout << ans ;
        cout << endl ;
    }
    return 0 ;
}    
