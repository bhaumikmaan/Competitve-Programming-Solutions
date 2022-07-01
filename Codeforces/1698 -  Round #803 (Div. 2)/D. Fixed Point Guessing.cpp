/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
int a[N] ;
vi query(int l , int r)
{
	cout << "? " << l + 1 << " " << r + 1 << endl ;
	// cout.flush() ;
	vi ret(r - l + 1) ;
	for(auto &i:ret)
	{
		cin >> i ;
		i-- ;
	}
	return ret ;
}
void solve()
{
	int n ;
	cin >> n ;
	int l = 0 , r = n - 1 ;
	while(l < r)
	{
		int m = (l + r)>>1 ;
		auto vec = query(l , m) ;
		set<int> s ;
		for(auto i:vec)
		{
			s.insert(i) ;
		}
		int cnt = 0 ;
		for(int i = l ; i <= m ; i++)
		{
			cnt += s.count(i) ;
		}
		if(cnt&1)
		{
			r = m ; 
		}
		else
		{
			l = m + 1 ;
		}
	}
	cout << "! " << l + 1 ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;		
    cin >> testcases ;	
    while( testcases -- )	
    {
    	solve( ) ;
    	cout << endl ;	
    }
    return 0 ;
}        	
