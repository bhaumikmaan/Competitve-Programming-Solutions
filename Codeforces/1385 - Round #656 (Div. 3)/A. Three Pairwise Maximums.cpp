/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1385/problem/A
// Solution Link: https://codeforces.com/contest/1385/submission/113438973

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases ;
    cin >> testcases ;
    while( testcases -- )
    {
        int x , y , z ;
        cin >> x >> y >> z ;
        int a , b , c ;
        bool flag = false ;
        if (x == y && y==z)
        {
          flag = true ; 
          a = x ;
          b = y ;
          c = z ;
        }
        else if (x == y && y>z)
        {
          flag = true ; 
          a = x ;
          b = z ;
          c = z ;
        }
        else if (x == z && z>y)
        {
          flag = true ; 
          a = y ;
          b = x ;
          c = y ;
        }
        else if (y == z && z>x)
        {
          flag = true ; 
          a = x ;
          b = x ;
          c = y ;
        }
        if(flag)
        {
          cout << "YES" << endl ;
          cout << a << " " << b << " " << c << endl ;
        }
        else 
        {
          cout << "NO" << endl ;
        }
    }
    return 0 ;
}  
