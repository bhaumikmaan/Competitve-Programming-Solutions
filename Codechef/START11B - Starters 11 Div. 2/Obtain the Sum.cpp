/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/START11B/problems/BIGARRAY
// Solution Link: https://www.codechef.com/viewsolution/51085414

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
        int n , s ;
        cin >> n >> s ;
        int x = (n*(n+1))/2 ;
        if(x <= s)
        {
        	cout << -1 ;
        }
        else
        {
        	if(x - s <= n)
        	{
        		cout << x - s ;
        	}
        	else
        	{
        		cout << -1 ;
        	}
        }
        cout << "\n" ;
    }
    return 0 ;
}    
