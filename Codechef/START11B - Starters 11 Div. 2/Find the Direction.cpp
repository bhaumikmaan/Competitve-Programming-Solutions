/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/START11B/problems/FACEDIR
// Solution Link: https://www.codechef.com/viewsolution/51158936

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
    int n ;
    cin >> n ;
    if(n%4 == 0)
    {
      cout << "North" ;
    }
    else if(n%4 == 1)
    {
      cout << "East" ;
    }
    else if(n%4 == 2)
    {
      cout << "South" ;
    }
    else
    {
      cout << "West" ;
    }
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        solve( ) ;
        cout << "\n";
    }
    return 0 ;
}    
