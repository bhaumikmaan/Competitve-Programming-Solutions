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
    	int n , m ;
    	cin >> n >> m ;
        string s ;
        cin >> s ; 
        for(int i = 0 ; i < m ; i++)
        {
        	int a , b ;
        	char x , y ;
        	cin >> a >> b >> x >> y ;
        	for(int i = a - 1 ; i < b ; i++)
        	{
        		if(s[i] == x)
        		{
        			s[i] = y ;
        		}
        	}
        }
        cout << s ;
        cout << endl ;
    }
    return 0 ;
}    
