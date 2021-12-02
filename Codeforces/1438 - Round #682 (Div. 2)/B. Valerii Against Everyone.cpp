/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll  
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
    	set<int> s ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		int a ;
    		cin >> a ;
    		s.insert(a) ;
    	}
    	if(s.size() != n)
    	{
    		cout << "YES" ;
    	}
    	else
    	{
    		cout << "NO" ;
    	}
        cout << endl ;
    }
    return 0 ;
}    
