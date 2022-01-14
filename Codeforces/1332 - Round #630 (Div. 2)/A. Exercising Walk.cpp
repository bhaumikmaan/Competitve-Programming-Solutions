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
    	int a , b , c , d , x , y , x1 , y1 , x2 , y2 ;
    	cin >> a >> b >> c >> d ;
    	cin >> x >> y >> x1 >> y1 >> x2 >> y2 ;
    	x += (b - a) ;
    	y += (d - c) ;
        if(x >= x1 && x <= x2 && y >= y1 && y <= y2 && (x2 > x1 || a+b == 0) && (y2 > y1 || c+d == 0))
        {
          cout << "Yes" ;
        }
        else
        {
          cout << "No" ;
        }
            cout << endl ;
      }
    return 0 ;
}    
