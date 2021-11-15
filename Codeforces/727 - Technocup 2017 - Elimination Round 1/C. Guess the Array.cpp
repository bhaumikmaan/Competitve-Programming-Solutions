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
int a[N];
int query(int x , int y)
{
	cout << "? " << x + 1 << " " << y + 1 << "\n" ;
	cout.flush() ;
	int r ;
	cin >> r ;
	return r ;
}
void solve()
{
	int n ;
	cin >> n ;
	int x = query(0 , 1) ;
	int y = query(0 , 2) ;
	int z = query(1 , 2) ;
	a[0] = (x + y - z)/2 ;
	a[1] = (x + z - y)/2 ;
	a[2] = (y + z - x)/2 ;
	for(int i = 3 ; i < n ; i++)
	{
		a[i] = query(0 , i) - a[0] ;
	}
	cout << "! " ;
	for(int i = 0 ; i < n ; i++)
	{
		cout << a[i] << " " ;
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
