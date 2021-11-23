/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int a[1000][2] ;
bool f[1000] ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	int n ;
    	cin >> n ;
    	int x , y ;
    	cin >> x >> y ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> a[i][0] >> a[i][1] ;
    	}
    	int ans = 0 ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		if(!f[i])
    		{
    			ans++ ;
    			int x1 = a[i][0] - x ;
    			int y1 = a[i][1] - y ;
    			for(int j = 0 ; j < n ; j++)
    			{
    				int x2 = a[j][0] - x ;
    				int y2 = a[j][1] - y ;
    				if(x1*y2 == x2*y1)
    				{
    					f[j] = true ;
    				}
    			}
    		}
    	}
    	cout << ans ;
        cout << "\n" ;
    }
    return 0 ;
}    
