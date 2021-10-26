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
	int n ;
	cin >> n ;
	int a[n] ;
	int b = 0 , c = 1 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		if(a[i] == 1)
		{
			b++ ;
		}
		else if(a[i] == 0)
		{
			c *= 2 ;
		}
	}
	cout << b*c ;	
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
