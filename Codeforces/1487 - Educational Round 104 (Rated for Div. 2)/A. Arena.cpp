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
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> v[i] ;
        }
        int cnt = 0 ;
        int mn = *min_element(v.begin() , v.end()) ;
        for(int i = 0 ; i < n ; i++)
        {
        	if(v[i] > mn)
        	{
        		cnt++ ;
        	}
        }
        cout << cnt << endl ;
    }
    return 0 ;
}    
