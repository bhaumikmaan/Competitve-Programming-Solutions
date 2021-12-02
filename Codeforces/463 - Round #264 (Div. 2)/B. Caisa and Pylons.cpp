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
    	int n ;
    	cin >> n ;
    	int a[n] ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> a[i] ;
    	}
    	sort(a , a+n) ;
    	cout << a[n-1] ;
        cout << endl ;
    }
    return 0 ;
}    
