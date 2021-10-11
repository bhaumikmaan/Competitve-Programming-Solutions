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
        string a , b ;
        cin >> a >> b ;
        int cnt = 0 ;
        for(int i = 0 ; i < a.length() ; i++)
        {
        	if(a[i] != b[i])
        	{
        		cnt++ ;
        	}
        }
        if(cnt&1)
        {
        	cout << "impossible" ;
        }
        else
        {
        	int ans = cnt/2 ;
        	for(int i = 0 ; i < a.length() ; i++)
        	{
        		if(a[i] == b[i])
        		{
        			cout << 0 ;
        		}
        		else
        		{
        			if(ans)
        			{
        				ans-- ;
        				cout << a[i] ;
        			}
        			else
        			{
        				cout << b[i] ;
        			}
        		}
        	}
        }
        cout << "\n" ;
    }
    return 0 ;
}    
