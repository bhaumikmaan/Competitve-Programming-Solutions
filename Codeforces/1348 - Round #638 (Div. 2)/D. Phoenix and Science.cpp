/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000001
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n ;
	cin >> n ;
	vi v ;
	int i = 0 , j = 1 ;
	while(i + j <= n)
	{
		v.pb(j) ;
		i += j ;
		j *= 2 ;
	}
	int t = n - i ;
	if(t)
	{
		v.pb(t) ;
	}
	sort(all(v)) ;
	cout << v.size() - 1 << "\n" ;
	for(int i = 1 ; i < v.size() ; i++)
	{
		cout << v[i] - v[i - 1] << " " ;
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
