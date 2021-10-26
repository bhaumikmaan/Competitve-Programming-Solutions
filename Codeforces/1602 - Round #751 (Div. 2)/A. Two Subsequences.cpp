/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
#define int long long
using namespace std ;
void solve( )
{
    string s ;
    cin >> s ;
    int ind = 0 ;
    char min = s[0] ;
    for (int i = 1 ; i < s.length() ; i++) 
    {
        if (s[i] < min) 
        {
            ind = i ;
            min = s[i] ;
        }
    }
    cout << s[ind] << " " ;
    for(int i = 0 ; i < s.size();i++) 
    {
        if(i != ind) 
        {
        	cout << s[i] ;
        }
    }
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }
    return 0 ;
}    
