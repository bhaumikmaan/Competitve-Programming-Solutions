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
int query(int x)
{
	cout << "? " << x << endl ; 
	// cout.flush() ;
	int r ;
	cin >> r ;
	return r ;
}
void solve()
{
	int n ;
	cin >> n ;
	vi vis(n + 1 , 0) , ans(n + 1) ;
	for(int i = 1 ; i <= n ; i++)
	{
		if(!vis[i])
		{
			vi v ;
			int c = query(i) ;
			while(true)
			{
				int x = query(i) ;
				v.pb(x) ;
				if(x == c)
				{
					break ;
				}
			}
			for(int it = 0 ; it < v.size() ; it++)
			{
				vis[v[it]] = v[(it + 1)%v.size()] ;
			}
		}
	}
	cout << "! " ;
	for(int i = 1 ; i <= n ; i++)
	{
		cout << vis[i] << " " ;
	}
	// cout.flush() ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
	while( testcases -- )
    {
    	solve( ) ;
        cout << endl ;
    }	
    return 0 ;
}    	
