/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/OCT21B/problems/MEXOR
// Solution Link: https://www.codechef.com/viewsolution/51927347

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
        if(n == 0)
        {
        	cout << 1 ;
        }
        else if(n == 1 || n == 2)
        {
        	cout << 2 ;
        }
        else
        {
        	int ans = 1 ;
        	while(2*ans <= n)
        	{
        		ans *= 2 ;
        	}
        	if(ans == n)
        	{
        		cout << n ;
        	}
        	else if(n == 2*ans - 1)
        	{
        		cout << n + 1 ;
        	}
        	else
        	{
        		cout << ans ;
        	}
        }
        cout << "\n" ;
    }
    return 0 ;
}    
