/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	map<int,int> m1 ;
	map<int,int> m2 ;
	int n ;
	cin >> n ;
	int a[n] , b[n] ;
	int as = inf , asi = -1 , bs = inf , bsi = -1 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		m1[a[i]] = i ;
		if(a[i] < as)
		{
			as = a[i] ;
			asi = i ;
		}
	}
	m2[1] = m1[1] ;
	for(int i = 3 ; i <= 2*n-1 ; i+=2)
	{
		m2[i] = min(m2[i-2] , m1[i]) ;
	}
	// cout << as << " " << asi << "  " << bs << "  " << bsi << "\n" ;
	int x = inf ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> b[i] ;
		x = min(x , i + m2[b[i]-1]) ;
	}
	cout << x ;
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
