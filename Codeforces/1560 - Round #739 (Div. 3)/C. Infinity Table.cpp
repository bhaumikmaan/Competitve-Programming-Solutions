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
        int ans = ceil((double)sqrt(n)) ;
        int s = sqrt(n) ;
        s *= s ;
        if(n - s == 0)
        {
        	cout << ans << " 1" ;
        }
        else if(n - s <= ans)
        {
        	cout << n - s << " " << ans ;
        }
        else
        {
        	int x = ans*ans  ;
        	cout << ans << " " << x - n + 1  ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    
