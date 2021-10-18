/***  KNOWLEDGE IS POWER  ***/
 
#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ; 
        if(n%4 == 0)
        {
        	cout << "YES" << endl ;
        }
        else
        {
        	cout << "NO" << endl ;
        }
    }
    return 0 ;
}  
