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
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vi a(n) , sum ;
	int curr = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		curr += a[i] ;
		sum.pb(curr) ;
	}
	int mx = *max_element(all(sum)) ;
	if(mx > 0)
	{
		cout << k + mx ;
	}
	else
	{
		cout << k ;
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
