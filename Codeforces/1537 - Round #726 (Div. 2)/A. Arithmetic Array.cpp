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
        int a[n] ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] ;
        	sum += a[i] ;
        }
        if(sum == n && sum%n == 0)
        {
        	cout << 0 ;
        }
        else if(sum > n)
        {
        	cout << sum - n ;
        }
        else
        {
        	cout << 1 ;
        }
        cout << endl ;
    }
    return 0 ;
}    
