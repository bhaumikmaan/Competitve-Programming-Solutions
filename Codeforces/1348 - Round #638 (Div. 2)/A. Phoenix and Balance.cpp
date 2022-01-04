/***  KNOWLEDGE IS POWER  ***/
 
#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int s[31] ;
    s[0] = 1 ;
    for(int i = 1;i <= 30;i++) 
    {
        s[i] = s[i - 1]*2;
    }
    int testcases ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int a = s[n] , b = 0 ;
        for(int i = 1 ; i < n/2 ; i++) 
        {
            a += s[i];
        }
        for(int i = n/2 ; i < n ; i++) 
        {
            b += s[i];
        }
        cout << a - b << endl ;
    } 
    return 0 ;
}  
