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
    cin >> testcases ;
    while( testcases -- )	
    {
    	string s ;
    	cin >> s ;
    	int n = s.length() ;
    	char a[500] = {0} ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		if(s[i] == s[i+1])
    		{
    			i++ ;
    		}
    		else
    		{
    			a[s[i]]++ ;
    		}
    	}
    	for(int i = 'a' ; i <= 'z' ; i++)
    	{
    		if(a[i] > 0)
    		{
    			cout << char(i) ;
    		}
    	}
    	cout << endl ;
    }
    return 0 ;
}    
