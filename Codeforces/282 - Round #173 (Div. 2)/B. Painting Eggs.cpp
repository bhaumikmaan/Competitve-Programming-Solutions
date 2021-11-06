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
void solve( )
{
	int n ;
	cin >> n ;
	int x = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		int a , b ;
		cin >> a >> b ;
		if(x + a <= 500)
		{
			cout << "A" ;
			x += a ;
		}		
		else
		{
			cout << "G" ;
			x -= b ; 
		}
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
