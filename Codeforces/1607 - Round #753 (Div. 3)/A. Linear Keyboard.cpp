/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
void solve( )
{
	string s ;
	cin >> s ;
    vector<int> v(26);
	for(int i = 0 ; i < s.size() ; i++)
	{
		v[s[i] - 'a'] = i ;
	}
	string t ;
	cin >> t ;
	int ans = 0 ;
	for(int i = 1 ; i < t.size() ; i++)
	{
		ans += abs(v[t[i] - 'a'] - v[t[i-1] - 'a']) ;
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
