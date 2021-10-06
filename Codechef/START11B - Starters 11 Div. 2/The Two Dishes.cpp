/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/START11B/problems/MAX_DIFF
// Solution Link: https://www.codechef.com/viewsolution/51159585

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
        if(s <= n)
        {
        	cout << s ;
        }
        else
        {
        	cout << 2*n - s ;
        }
        cout << "\n";
    }
    return 0 ;
}    
