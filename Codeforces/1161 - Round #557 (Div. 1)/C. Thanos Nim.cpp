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
    // cin >> testcases ;
    while( testcases -- )	
    {
        int n ;
        cin >> n ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] ;
        }
        int mn = *min_element(a , a + n) ;
        int cnt = count(a , a + n , mn) ;
        if(cnt > n/2)
        {
        	cout << "Bob" ;
        }
        else
        {
        	cout << "Alice" ;
        }
        cout << endl ;
    }
    return 0 ;
}    
