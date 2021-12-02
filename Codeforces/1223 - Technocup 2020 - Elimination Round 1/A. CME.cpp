/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t ;
    cin >> t ;
    while( t -- )
    {
        int n;
        cin>>n;
        if(n == 2)
        {
        	cout << 2 ;
        }
        else if(n %2 == 0 && n > 2)
    	{
    		cout << 0 ;
    	}
    	else
    	{
    		cout << 1 ;
    	}
    	cout << endl ;
    }
    return 0 ;
} 
