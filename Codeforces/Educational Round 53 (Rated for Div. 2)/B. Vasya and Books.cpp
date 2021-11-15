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
	int a[n] , b[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		a[i]-- ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		cin >> b[i] ;
		b[i]-- ;
	}
	vector<bool> c(n , false) ; 
	int j = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		int out = 0 ;
		while(!c[b[i]])
		{
			c[a[j]] = true ;
			j++ ;
			out++ ;
		}
		cout << out << " " ;
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
