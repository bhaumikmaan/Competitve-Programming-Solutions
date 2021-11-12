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
        int n , k ;
        cin >> n >> k ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] ;
        }
        sort(a , a + n) ;
        for(int i = 1 ; i <= k ; i++)
        {
        	a[n-1] += a[n - i - 1] ;
        }
        cout << a[n-1] ;
        cout << endl ;
    }
    return 0 ;
}    
