/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
int a[103][103] ;
using namespace std ;
void solve()
{
	int n , m ;
	cin >> n >> m ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			cin >> a[i][j] ;
			if((a[i][j] + i + j)&1)
			{
				a[i][j]++ ;
			}
		}
	}
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			cout << a[i][j] <<  " " ; 
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
