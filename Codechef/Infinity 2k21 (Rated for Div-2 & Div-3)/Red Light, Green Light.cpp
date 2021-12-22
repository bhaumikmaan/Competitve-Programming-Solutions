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
	int n , k ;
	cin >> n >> k ;
	vi v(n) ;
	int cnt = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i] ;
		if(v[i] > k)
		{
			cnt++ ;
		}
	}
	cout << cnt ;
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
