/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/LTIME99B/problems/PROGLANG
// Solution Link: https://www.codechef.com/viewsolution/50292865

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
    	int a , b , f , g , x , y ;
    	cin >> a >> b >> f >> g >> x >> y ;
    	if((a == f && b == g) || (a == g && b == f))
    	{
    		cout << 1 ;
    	}
    	else if((a == x && b == y) || (a == y && b == x))
    	{
    		cout << 2 ;
    	}
    	else
    	{
    		cout << 0 ;
    	}
        cout << "\n" ;
    }
    return 0 ;
}    
