/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ; 
void solve()
{
	int n ;
	cin >> n ;
	vi v(n) ;
	int sum = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i] ;
		sum += v[i] ;
	}
	sort(all(v)) ;
	cout << sum - v[0] ;
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
