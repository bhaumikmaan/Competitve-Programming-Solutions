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
	int n ;
	cin >> n ;
	vi a(n) , o , e ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		if(a[i]&1)
		{
			o.pb(a[i]) ;
		}
		else
		{
			e.pb(a[i]) ;
		}
	}
	if(is_sorted(all(a))) 
	{
		haan ;
		return ;
	}
	if(is_sorted(all(o)) && is_sorted(all(e)))
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
