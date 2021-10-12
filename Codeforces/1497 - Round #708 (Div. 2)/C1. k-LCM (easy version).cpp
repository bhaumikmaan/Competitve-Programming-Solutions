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
    	int n , k ;
    	cin >> n >> k ;
    	if(k == 3)
    	{
    		if(n == 3)
    		{
    			cout << "1 1 1" ;
    		}
    		else
    		{
    			if(n&1)
    			{
    				cout << "1 " << (n - 1)/2 << " " << (n - 1)/2 ;
    			}
    			else if(n%4 == 0)
    			{
    				cout << n/4 << " " << n/4 << " " << n/2 ; 
    			}
    			else if(n%4 == 2)
    			{
    				cout << "2 " << (n - 2)/2 << " " << (n - 2)/2 ;
    			}
    		}
    	}
    	cout << "\n" ;
    }
    return 0 ;
}    
