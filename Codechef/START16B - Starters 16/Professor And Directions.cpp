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
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    for(int i = 0 ; i < n - 1 ; i++)
    {
    	if(s[i] == s[i -1])
    	{
    		cout << "YES" ;
    		return ;
    	}
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
