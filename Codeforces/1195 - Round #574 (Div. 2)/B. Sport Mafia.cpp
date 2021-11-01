/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll  
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	int n , m ;
    	cin >> n >> m ;
    	int sum = 0 , j = 0 ;
    	int mn = n ;
    	while(mn != sum - m)
    	{
    		j++ ;
    		sum += j ;
    		mn-- ;
    	}
    	cout << mn ;
        cout << endl ;
    }
    return 0 ;
}    
