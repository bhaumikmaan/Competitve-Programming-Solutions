/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 2000100
using namespace std ;
int leaf[N] , one[N] , ans[N] ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    leaf[1] = 1 ;
    for(int i = 2 ; i < N ; i++)
    {
    	leaf[i] = (leaf[i - 1] + 2*one[i - 1])%mod ;
    	one[i] = leaf[i - 1] ;
    	ans[i] = (ans[i - 3] + 4*one[i - 1])%mod ;
    }
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	int n ;
    	cin >> n ;
    	cout << ans[n] ;
        cout << "\n" ;
    }
    return 0 ;
}    
