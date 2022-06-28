/***  USELESS MOTIVATIONAL LINE  ***/

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
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
vpi sol(vi a , int m)
{
	vpi b ;
	for(auto i:a)
	{
		int p = 1 ;
		while(i%m == 0)
		{
			i /= m ;
			p *= m ;
		}
		if(!b.empty() && b.back().first == i)
		{
			b.back().second += p ;
		}
		else
		{
			b.pb({i , p}) ;
		}
	}
	return b ;
}
void solve()
{
	int n , m ;
	cin >> n >> m ;
	vi a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int k ;
	cin >> k ;
	vi b(k) ;
	for(int i = 0 ; i < k ; i++)
	{
		cin >> b[i] ;
	}
	if(sol(a , m) == sol(b , m))
	{
		haan ;
	}
	else
	{
		cout << "NO" ;
	}
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
