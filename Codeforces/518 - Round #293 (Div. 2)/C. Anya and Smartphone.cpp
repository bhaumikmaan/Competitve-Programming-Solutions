/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
void solve()
{
	int n , m , k ;
	cin >> n >> m >> k ;
	vi a(n + 1) , pos(n + 1) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
		pos[a[i]] = i ;
	}
	int ans = m ;
	while(m -- )
	{
		int x ;
		cin >> x ;
		int i = pos[x] ;
		ans += (i - 1)/k ;
		if(i != 1)
		{
			swap(pos[a[i]] , pos[a[i - 1]]) ;
			swap(a[i] , a[i - 1]) ;
		}
	}
	cout << ans ;
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
