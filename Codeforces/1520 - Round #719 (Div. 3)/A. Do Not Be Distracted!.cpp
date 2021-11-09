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
        string s ;
        cin >> s ;
        bool flag = false ;
        for(int i = 0 ; i < n ; i++)
        {
        	for(int j = i + 1 ; j < n ; j++)
        	{
        		if(s[i] != s[i+1] && s[i] == s[j])
        		{
        			flag = true ;
        			break ;
        		}
        	}
        }
        if(flag)
        {
        	cout << "NO" ;
        }
        else
        {
        	cout << "YES" ;
        }
        cout << endl ;
    }
    return 0 ;
}    
