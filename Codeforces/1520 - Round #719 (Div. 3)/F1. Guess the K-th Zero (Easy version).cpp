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
int query(int l , int m)
{
	cout << "? " << l << " " << m << "\n" ;
	cout.flush();
        int x ;
        cin >> x ;
        return x ; 
}
void solve( )
{
	int n , t , k ;
	cin >> n >> t >> k ;
	int l = 1 , r = n , pre = 0 ;
	while(l < r)
	{
		int m = l + (r - l)/2 ;
		int x = query(l , m) ;
		if(m - l + 1 - x + pre < k)
		{
			pre += m - l + 1 - x ;
			l = m + 1 ;	
		}
		else
		{	
			r = m ;
		}
	}
	cout << "! " << l ;
	// cout.flush();
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
