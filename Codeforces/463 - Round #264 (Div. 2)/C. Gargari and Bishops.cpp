/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 2005
using namespace std ;
int a[N][N] , l[N][N] , r[N][N] , d[N][N] , u[N][N] ;
void solve()
{
	int n ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			cin >> a[i][j] ;
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			l[i][j] = l[i-1][j-1] + a[i][j] ;
			r[i][j] = r[i-1][j+1] + a[i][j] ;
		}
	}
	for(int i = n ; i ; i--)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			u[i][j] = u[i+1][j-1] + a[i][j] ;
			d[i][j] = d[i+1][j+1] + a[i][j] ;
		}
	}
	int s[2] , x[2] , y[2] ;
	s[0] = -1 , s[1] = -1 ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			int curr = (i + j)%2 ;
			int val = l[i][j] + r[i][j] + u[i][j] + d[i][j] - 3*a[i][j] ;
			if(s[curr] < val)
			{
				s[curr] = val ;
				x[curr] = i ;
				y[curr] = j ;
			}
		}
	}
	cout << s[0] + s[1] << "\n" << x[0] << " " << y[0] << " " << x[1] << " " << y[1] ;
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
