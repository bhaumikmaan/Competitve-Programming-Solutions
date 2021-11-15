/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
// #define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
void solve()
{
	int n , m ;
	cin >> n >> m ;
	vector<int> a(m) ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		x-- ;
		a[x]++ ;
	}
	vector<vector<int>> dp(3 , vector<int>(3 , 0)) ;
	for(auto i:a)
	{
		vector<vector<int>> temp(3 , vector<int>(3 , 0)) ;
		for(int x = 0 ; x < 3 ; x++)
		{
			for(int y = 0 ; y < 3 ; y++)
			{
				for(int z = 0 ; z < 3 ; z++)
				{
					if(x + y + z <= i)
					{
						temp[y][z] = max(temp[y][z], dp[x][y] + z + (i - x - y - z)/3);
					}
				}
			}
		}
		swap(temp , dp) ;
	}
	cout << dp[0][0] ;
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
