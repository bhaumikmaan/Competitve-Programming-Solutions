/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
void solve()
{
	int n , d ;
	cin >> n >> d ;
	vi a(n) ;
	for(auto &i:a)
	{
		cin >> i ;
		i-- ;
	}
	vi p(n , 0) ;
	p[0] = a[0] ;
	for(int i = 1 ; i < n ; i++)
	{
		p[i] += a[i] - a[i - 1] - 1 ;
	}
	int mn = min_element(all(p)) - p.begin() , ans = 0 ; // min element X , index ✔
	// cout << mn << " " ;
	int x = mn - 1 ;
	// d - a.back() - 2 -> End
	// (mx - 1/2) -> closest (in bw)
	// max of these with min break w/o moved 
	if(x >= 0)
	{
		int l = -1 , mx = 0 , copy = inf ;
		for(int i = 0 ; i < n ; i++)
		{
			if(i != x)
			{
				mx = max(mx , a[i] - l - 1) ;
				copy = min(copy , a[i] - l - 1) ;
				l = a[i] ;
			}
		}
		ans = max(ans , min(copy , max(d - 2 - l , (mx - 1)/2))) ;
	}
	x = mn ;
	if(x >= 0)
	{
		int l = -1 , mx = 0 , copy = inf ;
		for(int i = 0 ; i < n ; i++)
		{
			if(i != x)
			{
				mx = max(mx , a[i] - l - 1) ;
				copy = min(copy , a[i] - l - 1) ;
				l = a[i] ;
			}
		}
		ans = max(ans , min(copy , max(d - 2 - l , (mx - 1)/2))) ;
	}
	cout << ans ;
	// 2
	// 9 34
	// 3 4 10 12 14 20 27 30 33 
	// 2 7
	// 2 4 
	// Ans - 1 2
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
