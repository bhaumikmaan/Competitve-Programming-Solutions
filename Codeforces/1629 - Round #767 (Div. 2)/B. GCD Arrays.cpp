/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200100
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int l , r , k ;
	cin >> l >> r >> k ;
	int x = r - l ;
	x = (x + 1)>>1 ;
	if(l&1 && r&1)
	{
		x++ ;
	}
	if(l == r)
	{
		if(l > 1)
		{
			haan ;
		}
		else
		{
			cout << "NO" ;
		}
	}
	else
	{
		if(x <= k)
		{
			haan ;
		}
		else
		{
			cout << "NO" ;
		}
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
