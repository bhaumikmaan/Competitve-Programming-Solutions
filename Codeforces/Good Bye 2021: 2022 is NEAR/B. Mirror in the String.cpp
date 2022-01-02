/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200008
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	string ans = "" ;
	ans += s[0] ;
	for(int i = 1 ; i < n ; i++)
	{
		if(s[i] < s[i - 1])
		{
			ans += s[i] ;
		}
		else if(s[i] == s[i - 1] && i != 1)
		{
			ans += s[i] ;
		}
		else
		{
			break ;
		}
	}
	cout << ans ;
	reverse(all(ans)) ;
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
