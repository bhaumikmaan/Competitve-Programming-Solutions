/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 998244353
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
void solve()
{
	int n , m ;
	cin >> n >> m ;
	char a[n][m] ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			cin >> a[i][j] ;
			// cout << a[i][j] << " " ;
		}
		// cout << "\n" ;
	}
	for(int i = 0 ; i < n - 1 ; i++)
	{
		for(int j =	0 ; j < m - 1 ; j++)
		{
			int x = (a[i][j] - '0') + (a[i + 1][j] - '0') + (a[i][j + 1] - '0') + (a[i + 1][j + 1] - '0') ;
			if(x == 3)
			{
				cout << "NO" ;
				return ;
			}
		}
	}
	haan ;
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
