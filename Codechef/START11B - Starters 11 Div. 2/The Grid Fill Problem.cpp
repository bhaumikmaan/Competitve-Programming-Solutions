/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/START11B/problems/FILLGRID
// Solution Link: https://www.codechef.com/viewsolution/51090990

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int a[n][n] ;
        if(n == 2)
        {
        	cout << "-1 -1\n-1 -1\n" ;
        }
        else
        {
        	for(int i = 0 ; i < n ; i++)
	        {
	        	for(int j = 0 ; j < n ; j++)
	        	{
	        		if(i == j)
	        		{
	        			a[i][j] = -1 ;
	        		}
	        		else
	        		{
	        			a[i][j] = 1 ;
	        		}
	        	}
	        }
	        for(int i = 0 ; i < n ; i++)
	        {
	        	for(int j = 0 ; j < n ; j++)
	        	{
	        		cout << a[i][j] << " " ;
	        	}
	        	cout << "\n" ;
	        }
        }
        // cout << "\n" ;
    }
    return 0 ;
}    
