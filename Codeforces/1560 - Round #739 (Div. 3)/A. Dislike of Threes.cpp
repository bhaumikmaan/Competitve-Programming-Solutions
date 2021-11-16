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
    vector<int> v ;
    for(int i = 1 ; i < 1667 ; i++)
    {
    	if(i%3 != 0 && i%10 != 3)
    	{
    		v.pb(i) ;
    	}
    }
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        cout << v[n-1] ;
        cout << "\n" ;
    }
    return 0 ;
}    
