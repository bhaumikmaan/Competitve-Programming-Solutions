/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
    int n ;
    cin >> n ;
    int cnt = 0 , mn = n + 1 , mx = 0 ;
    for(int i = 1 ; i <= n ; i++)
    {
    	int x ;
    	cin >> x ;
    	if(x != i)
    	{
    		cnt++ ;
    		mn = min(mn , i) ;
    		mx = max(mx , i) ;
    	}
    }
    if(cnt == 0)
    {
    	cout << 0 ;
    }
    else if(mx - mn + 1 == cnt)
    {
    	cout << 1 ;
    }
    else
    {
    	cout << 2 ;
    }
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }
    return 0 ;
}    
