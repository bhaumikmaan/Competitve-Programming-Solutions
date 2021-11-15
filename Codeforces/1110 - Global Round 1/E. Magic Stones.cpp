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
	vector<int> a(n) , b(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		cin >> b[i] ;
	}	
	vector<int> x , y ;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		x.pb(a[i + 1] - a[i]) ;
		y.pb(b[i + 1] - b[i]) ;
	}
	sort(all(x)) ;
	sort(all(y)) ;
	if(a[0] != b[0] || a[n - 1] != b[n - 1] || x != y)
	{
		cout << "No" ;
	}
	else
	{
		cout << "Yes" ;
	}
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
