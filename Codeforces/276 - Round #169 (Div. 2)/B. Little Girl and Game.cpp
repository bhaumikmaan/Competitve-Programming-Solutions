/***  KNOWLEDGE IS POWER  ***/

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
    // cin >> testcases ;
    while( testcases -- )	
    {
    	string s ;
    	cin >> s ;
    	int a[26] = {0} ;
    	for(int i = 0 ; i < s.size() ; i++)
    	{
    		a[s[i] - 'a']++ ;
    	}
    	int c = 0 ;
    	for(int i = 0 ; i < 26 ; i++)
    	{
    		if(a[i]&1)
    		{
    			c++ ;
    		}
    	}
    	if(c == 0 || c&1)
    	{
    		cout << "First" ;
    	}
    	else
    	{
    		cout << "Second" ;
    	}
        cout << endl ;
    }
    return 0 ;
}    
