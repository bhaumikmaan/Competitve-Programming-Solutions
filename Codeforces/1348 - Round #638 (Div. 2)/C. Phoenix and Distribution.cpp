/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000001
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	string s ;
	cin >> s ;
	sort(all(s)) ;
	string ans[k] ;
	for(int i = 0 ; i < k ; i++)
	{
		ans[i] += s[i] ;
	}
	for(int i = k ; i < s.length() ; i++)
	{
		ans[0] += s[i] ;
	}
	if(s[0] != s[k - 1])
	{
		cout << ans[k - 1] ;
		return ;
	}
	string copy[k] ;
	for(int i = 0 ; i < n ; i++)
	{
		copy[i%k] += s[i] ;
	}	
	string res = min(*max_element(copy , copy + k) , ans[0]) ;
	cout << res ;
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
