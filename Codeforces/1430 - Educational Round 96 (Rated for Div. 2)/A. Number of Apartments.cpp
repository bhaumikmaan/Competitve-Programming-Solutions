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
    	int n ;
    	cin >> n ;
    	if(n <= 4 && n != 3)
    	{
    		cout << -1 << "\n" ;
    		continue ;
    	}
    	if(n%3 == 0)
    	{
    		cout << n/3 << " " << 0 << " " << 0 << "\n" ;
    	}
    	else if(n%3 == 1)
    	{
    		cout << (n-7)/3 << " " << 0 << " " << 1 << "\n" ;
    	}
    	else
    	{
    		cout << (n-5)/3 << " " << 1 << " " << 0 << "\n" ;
    	}
        // cout << endl ;
    }
    return 0 ;
}    
