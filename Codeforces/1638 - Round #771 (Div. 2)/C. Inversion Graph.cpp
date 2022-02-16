/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 300010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
void solve()
{
	int n ;
	cin >> n ;
	vi a(n + 1) , pos(n + 10) ;
	set<int> s ;
	for(int i = 1 ; i <= n ; i++)
	{
		s.insert(i) ; 
		cin >> a[i] ;
		pos[a[i]] = i ;
	}
	int mx = 0 , ans = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		mx = max(mx , a[i]) ;
		if(i == mx)
		{
			ans++ ;
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
