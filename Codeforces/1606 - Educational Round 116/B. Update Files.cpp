/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
void solve( )
{
	int n , k ;
	cin >> n >> k ;
	// n-- ;
	if(n == 1)
	{
		cout << 0 ;
		return ;
	}
	int l = log2(k+1) ;
        int p = pow(2 , l) ;
        if(p < k)
        {
          l++ ;
          p *= 2 ;
        }
        if(n - p > 0)
        {
          l += (n - p + k - 1)/(k) ;
        }
        cout << l ;
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
