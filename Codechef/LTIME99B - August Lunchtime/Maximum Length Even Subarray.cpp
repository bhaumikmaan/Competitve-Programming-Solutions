/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/LTIME99B/problems/MXEVNSUB
// Solution Link: https://www.codechef.com/viewsolution/50293536

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
    	int l = (n*(n+1))/2 ;
    	if(l%2)
    	{
    		cout << n - 1 ;
    	}
    	else
    	{
    		cout << n ;
    	}
        cout << "\n" ;
    }
    return 0 ;
}    
