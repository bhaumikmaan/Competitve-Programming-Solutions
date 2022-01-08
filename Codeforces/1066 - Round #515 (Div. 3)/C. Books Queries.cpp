/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
int l = 1 , r = 0 ;
int a[N] ;
void solve()
{
	char c ;
	int id ;
	cin >> c >> id ;
	if(c == 'R')
	{
		r++ ;
		a[id] = r ;
	}
	else if(c == 'L')
	{
		l-- ;
		a[id] = l ;
	}
	else
	{
		cout << min(a[id] - l , r - a[id]) << "\n" ;
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
        // cout << "\n" ;
    }	
    return 0 ;
}    	
