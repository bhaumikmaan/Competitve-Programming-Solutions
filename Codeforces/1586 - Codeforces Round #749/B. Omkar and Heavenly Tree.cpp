/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	vector<int> v(n + 1 , 0) ;
	vector<int> adj[n+1] ;
	int pre = 0 ;
	for(int i = 0 ; i < m ; i++)
	{
		int a , b , c ;
		cin >> a >> b >> c ;
		v[b] = 1 ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		if(v[i] == 0)
		{
			pre = i ;
			break ;
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		if(i == pre)
		{
			continue ;
		}
		cout << pre << " " << i << "\n" ;
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
