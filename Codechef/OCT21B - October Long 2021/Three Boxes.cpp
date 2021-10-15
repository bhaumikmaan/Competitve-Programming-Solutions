/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/OCT21B/problems/THREEBOX
// Solution Link: https://www.codechef.com/viewsolution/51926910

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
        int a , b , c , d ;
        cin >> a >> b >> c >> d ;
        if(a + b + c <= d)
        {
        	cout << 1 ;
        }
        else if(a + b <= d)
        {
        	cout << 2 ;
        }
        else
        {
        	cout << 3 ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    
