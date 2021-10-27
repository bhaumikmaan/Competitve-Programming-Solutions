/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
vector<int> v(100010 , 0) ;
void solve( )
{
    int a , m ;
    cin >> a >> m ;
    while(true)
    {
    	if(a == 0)
    	{
    		cout << "Yes" ;
    		return ;
    	}
    	if(v[a])
    	{
    		cout << "No" ;
    		return ;
    	}
    	v[a] = 1 ;
    	a += a%m ;
    	a %= m ;
    }
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }
    return 0 ;
}    
