/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int a[10][10] , b[10] ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
        for(int i = 0 ; i < 5 ; i++)
        {
        	for(int j = 0 ; j < 5 ; j++)
        	{
        		cin >> a[i][j] ;
        	}
        }
        for(int i = 0 ; i < 5 ; i++)
        {
        	b[i] = i ;
        }
        int ans = -inf ;
        do
        {
        	int x = 0 ;
        	for(int i = 0 ; i < 4 ; i++)
        	{
        		for(int j = i ; j < 4 ; j+=2)
        		{
        			x += a[b[j]][b[j + 1]] + a[b[j + 1]][b[j]] ;
        		}
        	}
        	ans = max(ans , x) ;
        }
        while(next_permutation(b , b + 5)) ;
        cout << ans ;
        cout << "\n" ;
    }
    return 0 ;
}    
