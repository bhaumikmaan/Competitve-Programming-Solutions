/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	vector<int> v ;
	int i , j ;
	for(i = 0 ; i < n ; i = j)
	{
		for(j = i ; j < n && s[i] == s[j] ; j++)
		{
			
		}
		v.pb(j - i) ;
	}
	int ans = 0 ;
	for(int i = 0 ; i < v.size() ; i++)
	{
		ans = min(i + 1 , ans + v[i] - 1) ;
	}
	cout << ans + (v.size() - ans + 1)/2 ; 
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
