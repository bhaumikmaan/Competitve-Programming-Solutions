/***	KNOWLEDGE IS POWER	***/

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
	int n ;
	cin >> n ;
	vi a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int cnt = 0 , g = 0 ;
	vi e , o ;
	for(int i = 1 ; i < n - 1 ; i++)
	{
		if(a[i] > 1)
		{
			g++ ;
		}
		if(!(a[i]&1))
		{
			e.pb(a[i]) ;
			cnt ++ ;
		}
		else
		{
			o.pb(a[i]) ;
		}
	}
	if(!g)
	{
		cout << -1 ;
		return ;
	}
	if(!cnt && n == 3)
	{
		cout << -1 ;
		return ;
	}
	int ans = 0 ;
	for(auto i:e)
	{
		ans += i/2 ;
	}
	for(auto i:o)
	{
		ans += (i + 1)/2 ;
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
