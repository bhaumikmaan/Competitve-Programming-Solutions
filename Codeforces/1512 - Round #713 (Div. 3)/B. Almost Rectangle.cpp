/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	char c[n][n] ;
	int currx = 0 , curry = 0 , x = 0 , y = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin >> c[i][j] ;
			if(c[i][j] == '*')
			{
				if(!currx)
				{
					currx = i + 1 ;
					curry = j + 1 ;
				}
				else
				{
					x = i + 1 ;
					y = j + 1 ;
				}
			}
		}
	}
	if(currx == x)
	{
		if(x == 1)
		{
			x++ ;
		}
		else
		{
			x-- ;
		}
	}
	if(curry == y)
	{
		if(y == 1)
		{
			y++ ;
		}
		else
		{
			y-- ;
		}
	}
	c[x - 1][curry - 1] = '*' ;
	c[currx - 1][y - 1] = '*' ;
	c[x - 1][y - 1] = '*' ;
	c[currx - 1][curry - 1] = '*' ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cout << c[i][j] ;
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
