/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int a[n][n] ;
        if(n == 2)
        {
        	cout << -1 << endl ;
        }
        else
        {
        	int c = -1 ;
        	for(int i = 0 ; i < n ; i++)
        	{
        		for(int j = 0 ; j < n ; j++)
        		{
        			if(c + 2 <= n*n)
        			{
        				c += 2 ;
        				a[i][j] = c ;
        			}
	        		else
	        		{
        				c = 2 ;
        				a[i][j] = c ;
        			}
        		}
        	}
        	for(int i = 0 ; i < n ; i++)
        	{
        		for(int j = 0 ; j < n ; j++)
        		{
        			cout << a[i][j] << " " ;
        		}
        		cout << endl ;
        	}
        }
    }
    return 0 ;
}    
