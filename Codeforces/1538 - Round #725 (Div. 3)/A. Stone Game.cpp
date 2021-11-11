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
        int pos1 = 0 , pos2 = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] ;
        }
        for(int i = 0 ; i < n ; i++)
        {
        	if(a[i] == 1)
        	{
        		pos1 = i ;
        	}
        	if(a[i] == n)
        	{
        		pos2 = i ;
        	}
        }
        int lpos1 = pos1 + 1 ;
        int lpos2 = pos2 + 1 ;
        int rpos1 = n - pos1 ;
        int rpos2 = n - pos2 ;
        int x = max(lpos1 , lpos2) ;
        int y = max(rpos1 , rpos2) ;
        int z = min(lpos1 + rpos2 , lpos2 + rpos1) ;
        cout << min(x , min(y,z)) ; 
        cout << endl ;
    }
    return 0 ;
}    	
