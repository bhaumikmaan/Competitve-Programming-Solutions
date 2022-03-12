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
	vvi ans ;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		for(int j = m - 1 ; j >= 0 ; j--)
		{
			if(a[i][j] == '1')
			{
				if(i)
				{
					ans.pb({i - 1 , j , i , j}) ;
				}
				else if(j)
				{
					ans.pb({i , j - 1 , i , j}) ;
				}
				else
				{
					cout << "-1\n" ;
					return ;
				}
			}
		}
	}
	cout << ans.size() << "\n" ;
	for(auto i:ans)
	{
		for(auto j:i)
		{
			cout << j + 1 << " " ; 
		}
		cout << "\n" ;
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
